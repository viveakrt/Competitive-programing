/*
    Problem name: Bowling Strategy
    Event: September Cook off 2020
    Link to the problem: https://www.codechef.com/COOK122B/problems/BOWLERS
    All test cases passed
 */
package CodeChef;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Bowlers {
	public static void main(String[] args) throws IOException {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(reader.readLine());
		while (T-- > 0) {
			String[] parts = reader.readLine().split(" ");
			int n = Integer.parseInt(parts[0]);// number of overs
			int k = Integer.parseInt(parts[1]);// number of bowlers
			int l = Integer.parseInt(parts[2]);// number of overs per bowler

			if (n > k * l)// if the number of overs to be bowled is greater than the possible number of
							// overs that can be bowled
				System.out.println(-1);
			else if (k == 1 && n > 1)// when there is only one bowler and the number of overs to be bowled are
										// greater than 1
				System.out.println(-1);
			else {
				// print a possible correct sequence of n number of bowlers
				int x = 1;
				for (int i = 0; i < n; i++) {
					System.out.print(x + " ");
					x++;
					if (x == k + 1)
						x = 1;
				}
				System.out.println();
			}
		}
	}
}