# https://codeforces.com/problemset/problem/155/A
n=int(input())
l=list(map(int,input().strip().split()))
count=0
for i in range(1,len(l)):
    if l[i]==max(l[0:i+1]) or l[i]==min(l[0:i+1]):
        if l[i] not in l[:i]:
            count+=1
print(count)