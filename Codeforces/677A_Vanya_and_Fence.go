// https://codeforces.com/problemset/problem/677/A
package main

import "fmt"

func main() {
	var n, h, v int
	c := 0
	fmt.Scan(&n)
	fmt.Scan(&h)
	for i := 0; i < n; i++ {
		fmt.Scan(&v)
		if v > h {
			c = c + 2
		} else {
			c = c + 1
		}
	}
	fmt.Print(c)
}
