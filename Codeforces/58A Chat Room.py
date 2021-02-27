#https://codeforces.com/problemset/problem/58/A
s=input()
m = 'hello'
n = 0
for i in s:
    if(n<5 and i==m[n]):
        n+=1

print('YES') if (n==5) else print('NO')


        
