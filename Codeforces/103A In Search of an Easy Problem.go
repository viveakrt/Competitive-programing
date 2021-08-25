// https://codeforces.com/problemset/problem/1030/A

package main

import "fmt"

func main() {
	var n, o, f int
	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++ {
		fmt.Scan(&o)
		if o == 1 {
			f = 1
			break
		}
	}
	if f == 1 {
		fmt.Println("HARD")
	} else {

		fmt.Println("EASY")
	}
}
