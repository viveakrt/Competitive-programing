#https://codeforces.com/problemset/problem/416/B

m, n = map(int, input().split())

pictures_t = []
for i in range(m):
  pictures_t.append(list(map(int, input().split())))

last_work = [0, 0, 0, 0, 0]
for j in range(m):
  time = 0
  for i in range(n):
    lw = last_work[i]
    if time < lw:
      time = lw 
    time += pictures_t[j][i]
    last_work[i] = time
  print(time, end=" ")
