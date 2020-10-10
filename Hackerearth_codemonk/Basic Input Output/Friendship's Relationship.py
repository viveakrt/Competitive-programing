for _ in range(int(input())):
    n=int(input())
    s=''
    for i in range(1,n+1):
        s+=i*'*'
        s+=(n-i)*'##'
        s+=i*'*'
        s+='\n'
    print(s)