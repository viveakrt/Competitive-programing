import java.io.*;
import java.util.*;

class Solution_Second
{
  //Object representations of the pizzas which have been prepared.
  static ArrayList<Pizza> pizzas = new ArrayList<Pizza>();

  //Object representations of the deliveries which are to be made.
  static ArrayList<Delivery> deliveries = new ArrayList<Delivery>();

  //List of files to be processed.
  static String in_files[] = {"a_example", "b_little_bit_of_everything", "c_many_ingredients", "d_many_pizzas", "e_many_teams"};

  //Total number of pizzas.
  static int total;

  //Stores the number of teams 0->4 and 2->2.
  static int teams[] = new int[3];

  //Starting point of execution.
  public static void main(String args[]) throws Exception
  {
    for(int i = 0; i < in_files.length; i++)
    {
      System.out.println("Running for file " + in_files[i]);

      prepareData(in_files[i]);
      initializeDeliveries();
      computeScores();
      produceOutputs(in_files[i]);

      //Re-initializing variables.
      pizzas = new ArrayList<Pizza>();
      deliveries = new ArrayList<Delivery>();
    }
  }

  //Write the outputs to a file.
  public static void produceOutputs(String fileName) throws Exception
  {
    FileWriter fw = new FileWriter(fileName + ".out");
    fw.write(deliveries.size() + "\n");
    for(int i = 0; i < deliveries.size(); i++)
    {
      Delivery current = deliveries.get(i);
      fw.write(current.orders + current.order_list + "\n");
    }
    fw.close();
  }

  //Compute the scores and make deliveries.
  public static void computeScores()
  {
    //Blocks to be computed at a time.
    int block = 2;

    //Loop variable.
    //False, if no delivery object has been modified.
    boolean d_modified = true;

    while(d_modified)
    {
      d_modified = false;
      for(int i = 0; i < deliveries.size(); i++)
      {
        Delivery d = deliveries.get(i);
        d.cache = new double[pizzas.size()];

        if(d.c_orders < d.orders && !d_modified)
        {d_modified = true;}

        //Step: Number of pizzas to be added to the delivery at this point.
        //Related to block.
        int step = (block <= d.orders - d.c_orders)?block:d.orders - d.c_orders;
        for(int j = 0; j < step; j++)
        {
          d.p_id = -1;
          d.h_score = -1;

          for(int k = 0; k < pizzas.size(); k++)
          {
            //Create relative scores for each pizza.
            //Update if better.
            double temp = d.pizzaScore(pizzas.get(k), k);
            if(temp > d.h_score)
            {
              d.p_id = k;
              d.h_score = temp;
            }
          }

          //Process the selected pizza.
          //And deliver it. (Add it to the delivery).
          Pizza to_be_sent = pizzas.get(d.p_id);

          //Ingredients to be added/sent.
          String tbs_ings[] = to_be_sent.ingredients.split(" ");
          d.order_list = d.order_list + " " + to_be_sent.index;
          for(String ing : tbs_ings)
          {
            if(d.ingredients.indexOf(ing) == -1)
            {
              d.ingredients = d.ingredients + " " + ing;
              d.count++;
            }
          }
          //Remove added pizza from list.
          pizzas.remove(to_be_sent);
          d.c_orders++;
        }
        d.cache = null;
      }
    }
  }

  //Select the teams and initialize the delivery objects.
  private static void initializeDeliveries()
  {
    int t_orders = 4;
    while(true)
    {
      //Change the team size and continue, or exit.
      if(total - t_orders < 0 || teams[4 - t_orders] - 1 < 0)
      {
        t_orders--;
        if(t_orders < 2){return;}
        continue;
      }
      Delivery c_delivery = new Delivery(t_orders);
      deliveries.add(c_delivery);
      total -= t_orders;
      teams[4 - t_orders]--;
    }
  }

  //Read data from the file and prepare it.
  private static void prepareData(String fileName) throws Exception
  {
    BufferedReader Rb = new BufferedReader(new FileReader(fileName));

    String str = Rb.readLine();
    String temp[] = str.split(" ");
    total = Integer.valueOf(temp[0]);
    teams[2] = Integer.valueOf(temp[1]);
    teams[1] = Integer.valueOf(temp[2]);
    teams[0] = Integer.valueOf(temp[3]);

    int index_counter = 0;
    while((str = Rb.readLine()) != null)
    {
      temp[0] = str.substring(0, str.indexOf(" "));
      str = str.substring(str.indexOf(" ") + 1);
      temp[1] = str;

      Pizza c_pizza = new Pizza();
      c_pizza.count = Integer.valueOf(temp[0]);
      c_pizza.ingredients = temp[1];
      c_pizza.index = index_counter;
      pizzas.add(c_pizza);
      index_counter++;
    }
    Rb.close();
  }
}

//One object for each pizza.
class Pizza
{
  String ingredients;
  //Number of ingredients.
  int count;
  int index = -1;
}

//One object for every delivery.
class Delivery
{
  double cache[];
  //Cache of previous values.
  String ingredients = "";
  //List of pizzas added.
  String order_list = "";
  //Number of ingredients.
  int count;
  //Current element count.
  int c_orders;
  //Total number of elements to be added.
  int orders;
  //Current high score.
  double h_score;
  //Current prospective addition.
  int p_id;

  Delivery(int t_orders)
  {orders = t_orders;}

  //Compute the score for a pizza.
  //The greater the better.
  double pizzaScore(Pizza p, int index)
  {
    if(cache[index] != 0)
    {
      if(cache[index] < h_score)
      {return 0;}
    }

    //Ingredients found and not found.
    int found = 0;
    int n_found = 0;

    String ings[] = p.ingredients.split(" ");
    for(String ing : ings)
    {
      if(ingredients.indexOf(ing) != -1)
      {found++;}
      else
      {n_found++;}
    }
    //Score to be returned.
    double score = Math.pow(n_found, 1 - found / p.count / 2);
    cache[index] = score;
    //things to be added here.
    return score;
  }
}
