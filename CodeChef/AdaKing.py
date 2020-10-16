'''
Problem Link - https://www.codechef.com/JULY20B/problems/ADAKING
'''

from sys import *
from math import *
from collections import *

mod = 1000000007

def get_array(): return list(map(int, stdin.readline().split()))
 
def get_ints(): return map(int, stdin.readline().split())

def get_int(): return int(stdin.readline())
 
def get_input(): return stdin.readline().strip()

def main():
    tc = get_int()
    while(tc):
    	K = get_int()
    	dots = '.' * (K-1)
    	cross = 'X' * (64-K)
    	O = 'O'
    	chess_board = dots + O + cross 
    	for i in range(0,64,8):print(chess_board[i:i+8])
    	tc-=1

if __name__ == "__main__":
    main()
