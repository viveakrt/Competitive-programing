n=str(input())
k=str(input())
res=""
for i in range(len(k)):
    if n[i]==k[i]:
        res+='0'
    else:
        res+='1'
print(res)
