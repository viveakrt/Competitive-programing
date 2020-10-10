n = int(input())
L = input()
if L.count('HH')>0:
    print('NO')
else:
    print('YES')
    print(L.replace('.','B'))