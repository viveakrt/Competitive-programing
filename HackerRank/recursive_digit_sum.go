package main

import (
	"fmt"
	"strconv"
)

// link to problem: https://www.hackerrank.com/challenges/recursive-digit-sum/problem

func sumDigit(n string) string {
	var sum int
	for _, v := range n {
		toInt, _ := strconv.Atoi(string(v))
		sum += toInt
	}
	return strconv.Itoa(sum)
}

func superDigit(n string, k int32) int32 {
	var digit string
	digit = sumDigit(n)
	toInt, _ := strconv.Atoi(digit)
	toInt *= int(k)
	digit = strconv.Itoa(toInt)

	for len(digit) > 1 {
		digit = sumDigit(digit)
	}
	result, _ := strconv.Atoi(digit)
	return int32(result)
}

func main() {
	fmt.Println(superDigit("148", 3))
	fmt.Println(superDigit("9875", 4))
	fmt.Println(superDigit("123", 3))
}
