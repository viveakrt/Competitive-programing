'''
Problem Link - https://www.codechef.com/JUNE20B/problems/EOEO'''
from sys import *
from math import *
from collections import *

mod = 1000000007

def get_array(): return list(map(int, stdin.readline().split()))
 
def get_ints(): return map(int, stdin.readline().split())

def get_int(): return int(stdin.readline())
 
def get_input(): return stdin.readline().strip()

def Jerry_Wins(tom):
    jerry = 1
    flag = 0
    while jerry<=tom:
        if (not(tom&1) and not(jerry&1)):
            tom //=2;jerry //= 2;jerry+=1
        elif (not(tom&1) and jerry&1):jerry+=1
        elif (tom&1):
            if not(jerry&1):
                jerry -= 1
            tom -= jerry;flag = 1
            break
    if flag:stdout.write(str(tom//2)+'\n')
    else:stdout.write('0\n')

def main():
    tc = get_int()
    while(tc):
        TS = get_int()
        if TS&1:
            stdout.write(str(TS//2)+'\n')
        else:
            C = 0
            check = (not TS&TS-1 if TS else False)
            if check:
                stdout.write('0\n')
            else:
                Jerry_Wins(TS)
        tc-=1

if __name__ == "__main__":
    main()
