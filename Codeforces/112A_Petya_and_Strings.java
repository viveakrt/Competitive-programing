/**
*Link for the problem : https://codeforces.com/problemset/problem/112/A
*Description :-
*Compare 2 strings lexicographically irrespective of case
*/


import java.util.*;
public class _112A
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		String str1 = s.nextLine();
		String str2 = s.nextLine();
		str1 = str1.toUpperCase();
		str2 = str2.toUpperCase();
		int l = str1.length();
		char ch1,ch2;
		int flag = 0;
		for(int i = 0; i < l; i++)
		{
			ch1 = str1.charAt(i);
			ch2 = str2.charAt(i);
			if((int)ch1<(int)ch2)
			{
				flag = -1;
				break;
			}
			if((int)ch1>(int)ch2)
			{
				flag = 1;
				break;
			}
		}
		System.out.println(flag);
	}
}
