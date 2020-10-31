/**
*Link for the Problem : https://codeforces.com/problemset/problem/158/A
*Description :
*Given the no. of participants and their scores, we have to the calculate the number of people who advance to the next round
*considering the passing score to be the score of the candidate whose rank in a non-increasing list is given.
*/

import java.util.*;
public class _158A
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int n, k, i, score[], comp, c = 0;
		n = sc.nextInt();
		k = sc.nextInt();
		sc.nextLine();
		score = new int[n];

		for(i = 0; i < n; i++)
		{
			score[i] = sc.nextInt();
		}
		
		comp = score[k-1];
		
		for(i = 0; i < n; i++)
		{
			if(score[i] > 0 && score[i] >= comp)
				c++;
		}

		System.out.println(c);
	}
}
