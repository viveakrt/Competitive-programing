/**
*Link for the Problem : https://codeforces.com/problemset/problem/116/A
*Description : 
*In a moving tram stopping at the given number of stations, number of people who got off and who got on the tram is given.
*Given that the tram empties at the last station and is also empty before arriving at the first station, we are to find it's minimum capacity.
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
