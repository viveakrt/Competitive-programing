package main

import "fmt"

func main() {
	var n, a, b int
	c := 0
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a)
		fmt.Scan(&b)
		if (a + 2) <= b {
			c = c + 1
		}

	}
	fmt.Print(c)
}
