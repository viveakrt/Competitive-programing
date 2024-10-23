package main

import (
	"fmt"
	"math"
	"strings"
)

// link to problem: https://www.hackerrank.com/challenges/encryption/problem

func encryption(s string) string {
	s = strings.ReplaceAll(s, " ", "")
	lenStr := float64(len(s))
	min := math.Floor(math.Sqrt(lenStr))
	max := math.Ceil(math.Sqrt(lenStr))
	if min*max < lenStr {
		min++
	}

	var temp [][]string
	var rows []string
	for i, v := range s {
		if i%int(max) == 0 && i >= int(max) {
			temp = append(temp, rows)
			rows = []string{}
		}
		rows = append(rows, string(v))
	}
	temp = append(temp, rows)

	var result string
	for x := 0; x < int(max); x++ {
		for y := 0; y < int(min); y++ {
			if len(temp[y]) < int(max) && x >= len(temp[y]) {
				break
			}
			result += temp[y][x]
		}
		result += " "
	}
	return result
}

func main() {
	fmt.Println(encryption("haveaniceday"))
	fmt.Println(encryption("feedthedog"))
	fmt.Println(encryption("chillout"))
}
