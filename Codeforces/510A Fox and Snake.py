# https://codeforces.com/problemset/problem/510/A

n,m =  map(int, input().split())
a = ["#"]*m
b = ["."]*(m-1)
flag = 0
for i in range(n):
    if i%2==0:
        print("".join(a))
    elif flag == 0:
            print("".join(b)+"#")
            flag = 1
    else :
        print("#"+"".join(b))
        flag = 0