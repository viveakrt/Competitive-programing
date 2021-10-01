'''
6 kyu	Persistent Bugger.
https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/train/python

Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

For example:

persistence(39) # returns 3, because 3*9=27, 2*7=14, 1*4=4
             # and 4 has only one digit

persistence(999) # returns 4, because 9*9*9=729, 7*2*9=126,
              # 1*2*6=12, and finally 1*2=2

persistence(4) # returns 0, because 4 is already a one-digit number
'''

from operator import mul
from functools import reduce

def persistence(n):
	i = 0
	while n >= 10:
		n = reduce(mul, [int(x) for x in str(n)], 1)
		i += 1
	return i

print(persistence(39))
