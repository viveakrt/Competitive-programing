# Link to question: https://www.hackerrank.com/challenges/strange-code/problem

# Solution 

t=int(input())
v=3
f=3
for i in range(1,t):
    if(f<t):
        i=i+v
        v=v*2
        f=f+v
    else:
        v=f+1-t
        break
print(v)
