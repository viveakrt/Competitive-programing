import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class App {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        // User input: e.g. "5,4,9,1,10,null,7"
        String input = "5,4,9,1,10,null,7";
        String[] values = input.split(",");

        // Create the binary tree from input array
        TreeNode root = buildTree(values);

        solution s = new solution();
        s.replaceValueInTree(root);

        scanner.close();
    }

    // Method to build the tree from array input
    public static TreeNode buildTree(String[] values) {
        if (values.length == 0 || values[0].equals("null")) {
            return null;
        }

        TreeNode root = new TreeNode(Integer.parseInt(values[0]));
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);

        int index = 1;
        while (!queue.isEmpty() && index < values.length) {
            TreeNode currentNode = queue.poll();

            // Assign left child
            if (index < values.length && !values[index].equals("null")) {
                currentNode.left = new TreeNode(Integer.parseInt(values[index]));
                queue.add(currentNode.left);
            }
            index++;

            // Assign right child
            if (index < values.length && !values[index].equals("null")) {
                currentNode.right = new TreeNode(Integer.parseInt(values[index]));
                queue.add(currentNode.right);
            }
            index++;
        }
        return root;
    }

    // Method for in-order traversal of the tree
    public static void inOrderTraversal(TreeNode node) {
        if (node != null) {
            inOrderTraversal(node.left); // Visit left subtree
            System.out.print(node.val + " "); // Visit node
            inOrderTraversal(node.right); // Visit right subtree
        }
    }

}
