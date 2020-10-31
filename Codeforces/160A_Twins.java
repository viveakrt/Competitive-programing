/**
*Link for the Problem : https://codeforces.com/problemset/problem/160/A
*Description :
*Given the no. of coins and their specific values, we are to calculate the
*minimum no. of coins such that the value exceeds the value of the coins left.
*/

import java.util.*;
public class _160A
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int n,val[],i,sum,min;
		n = sc.nextInt();
		sc.nextLine();
		val = new int[n];
		for(i = 0; i < n; i++)
		{
			val[i] = sc.nextInt();
		}
		_160A a = new _160A();
		val = (a.sort(val)).clone();
		sum = a.sumup(val);
		min = a.calc(val,sum);
		System.out.println(min);
	}

	public int[] sort(int val[])
	{
		int l = val.length;
		int i,j,temp;
		for(i = 0; i < l; i++)
		{
			for(j = 0; j < l-i-1; j++)
			{
				if(val[j+1]>val[j])
				{
					temp = val[j];
					val[j] = val[j+1];
					val[j+1] = temp;
				}
			}
		}
		return val;
	}

	public int calc(int val[],int sum)
	{
		int l = val.length;
		int i,f,sum1;
		f = sum1 = 0;
		for(i = 0; i < l; i++)
		{
			f++;
			sum1 = sum1 + val[i];
			sum = sum - val[i];
			if(sum1>sum)
				break;
		}
		return f;
	}

	public int sumup(int val[])
	{
		int l = val.length;
		int i,sum;
		sum = 0;
		for(i = 0; i < l; i++)
		{
			sum = sum + val[i];
		}
		return sum;
	}
}
