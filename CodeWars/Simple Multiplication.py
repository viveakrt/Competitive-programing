"""
Link: https://www.codewars.com/kata/583710ccaa6717322c000105
This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

Tag: FUNDAMENTALS

"""

def simple_multiplication(number) :
    return number*9 if number%2 else number*8
