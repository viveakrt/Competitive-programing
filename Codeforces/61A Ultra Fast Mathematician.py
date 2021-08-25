n=str(input())
k=str(input())
res = "".join('0' if n[i]==k[i] else '1' for i in range(len(k)))
print(res)
# https://codeforces.com/problemset/problem/61/A
# res=""
# for i in range(len(k)):
#     if n[i]==k[i]:
#         res+='0'
#     else:
#         res+='1'
# print(res)