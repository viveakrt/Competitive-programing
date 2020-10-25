/**
*Link for the problem : https://codeforces.com/problemset/problem/116/A
*Description :-
*Tram stops at each stop and a given number of people get off and get on.
*Calculate the minimum capacity.
*/


import java.util.*;
public class _116A
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int i,cap,max;
		max = cap = 0;
		int[] in = new int[n];
		int[] out = new int[n];
		for(i = 0; i < n; i++)
		{
			out[i] = sc.nextInt();
			in[i] = sc.nextInt();
			sc.nextLine();
		}

		for(i = 0; i < n; i++)
		{
			max = max - out[i] + in[i];
			cap = cap<max?max:cap;
		}
		System.out.println(cap);
		sc.close();
	}
}
