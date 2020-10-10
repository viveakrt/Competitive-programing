for _ in range(int(input())):
    n = int(input())
    arr = set(map(int,input().split()))
    ar=arr.difference({0})
    print(len(ar))
# https://www.codechef.com/problems/TREE2
# in is problem we have to find dictinct number excluding one
# so i take set because is remove duplicate and print length of number