# https://codeforces.com/problemset/problem/25/A

n = int(input())
 
evenness = list(map(lambda n: int(n) % 2 == 0, input().split()))
 
is_even = evenness[:3].count(True) < evenness[:3].count(False)
 
print(1 + evenness.index(is_even))
