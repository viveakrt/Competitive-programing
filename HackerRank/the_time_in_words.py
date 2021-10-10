#!/bin/python3
# https://www.hackerrank.com/challenges/the-time-in-words/problem

import math
import os
import random
import re
import sys

#
# Complete the 'timeInWords' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER h
#  2. INTEGER m
#

def get_min_string(m):
    ''' Provides a string corresponding to the minute quantity m'''
    if m == 1:
        return ' minute'
    if (m == 15) or (m == 30):
        return ''
    return ' minutes'


def timeInWords(h, m):
    # The words correspond to the list index. Example: list[1] is 'one'
    # Exceptions: list[15] = quarter and list[30] = half
    to_word = ['zero', 'one', 'two', 'three', 'four', 'five', 'six',
    'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen', 'fourteen',
    'quarter', 'sixteen', 'seventeen', 'eighteen', 'nineteen', 'twenty', 'twenty one',
    'twenty two', 'twenty three', 'twenty four', 'twenty five', 'twenty six',
    'twenty seven', 'twenty eight', 'twenty nine', 'half']

    full_hour = 60  # minutes

    if (m == 0):  # Use o' clock
        return f"{to_word[h]} o' clock"

    if (m <= 30):  # Use past
        compl_string = 'past'
    else:  # Use to
        m = full_hour - m
        h += 1
        compl_string = 'to'

    min_string = get_min_string(m)
    final_time = f'{to_word[m]}{min_string} {compl_string} {to_word[h]}'  # Joins the strings to get the final answer
    return final_time


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    h = int(input().strip())

    m = int(input().strip())

    result = timeInWords(h, m)

    fptr.write(result + '\n')

    fptr.close()
