#https://codeforces.com/problemset/problem/160/A

num = int(input())

coin = list(map(int,input().split()))
count = 0
total =0
half= sum(coin)/2
coin =sorted(coin)[::-1]
for i in coin:
    if total<= half:
        total+=i
        count+=1
        
print(count)
