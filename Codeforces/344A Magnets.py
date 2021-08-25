n= input()
count = 1
f = input()
for i in range(int(n)-1):
    v = input()
    if(f!=v):
        f=v
        count=count+1
print(count)