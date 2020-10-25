/**
*Link for the problem : https://codeforces.com/problemset/problem/131/A
*Description :-
*Change the case for all letters of the input which are either in all caps or inverse capitalization.
*/


import java.io.*;
import java.util.*;
public class _131A
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String w = "";
		String s = "";
		char ch;
		String letter = "";
		int l, i;
		s = sc.nextLine();
		l = s.length();

		if(s.substring(1).equals(s.substring(1).toUpperCase()))
		{
			for( i = 0 ; i < l ; i++)
			{
				ch = s.charAt(i);
				letter = "" + ch;

				if(Character.isUpperCase(ch))
					w = w + letter.toLowerCase();
				if(Character.isLowerCase(ch))
					w = w + letter.toUpperCase();
			}
		}
		else
		{
			w = s;
		}

		System.out.println(w);
	}
}
