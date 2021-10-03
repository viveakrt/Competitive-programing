package main

import (
	"fmt"
	"math"
)

// link problem: https://www.hackerrank.com/challenges/sherlock-and-squares/problem

func squares(a int32, b int32) int32 {
	ceilA := int32(math.Ceil(math.Sqrt(float64(a))))
	floorB := int32(math.Floor(math.Sqrt(float64(b))))

	return floorB - ceilA + 1
}

func main() {
	fmt.Println(squares(3, 9))
	fmt.Println(squares(17, 24))
	fmt.Println(squares(35, 70))
	fmt.Println(squares(100, 1000))
}
