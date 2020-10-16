'''Problem Link - https://www.codechef.com/APRIL20B/problems/UNITGCD'''
from sys import stdin

def read(n,arr):
    if n > 1:
        print(n//2)
        if n&1:
            print(3,arr[0],arr[1],arr[-1])
            for i in range(2,n-2,2):
                print(2,arr[i],arr[i+1])
        else:
            for i in range(1,n,2):
                print(2,arr[i-1],arr[i])
    else:
        print(1)
        print(1,1)
for _ in range(int(stdin.readline())):
    n = int(stdin.readline())
    arr = list(range(1,n+1))
    read(n,arr)
