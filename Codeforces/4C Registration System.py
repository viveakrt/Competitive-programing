# https://codeforces.com/problemset/problem/4/C
n = int(input())
d = {}
for i in range(0, n):
    s = input()
    if s in d:
        print(s+str(d[s]))
        d[s] += 1
    else:
        print("OK")
        d[s] = 1
# n = input()
# l = []
# for _ in range(int(n)):
#     val =  input()
#     if val in l:
#         ind = l.index(val)
#         print(val+str(l[ind+1]))
#         l[ind+1] += 1 
#     else:
#         print("OK")
#         l.append(val)
#         l.append(1)

# n = int(input())
# l = [input() for _ in range(n)]
# d = set(l)
# for i in d:
#     c =0
#     for j in range(n):
#         if l[j] == i:
#             l[j] = "OK" if c==0 else l[j]+str(c)
#             c+=1
# for i in l:
#     print(i)