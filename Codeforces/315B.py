# Question
# https://codeforces.com/problemset/problem/315/B

lengths = map(int, raw_input().split())
n = lengths[0]
m = lengths[1]
array = map(int, raw_input().split())

passed_increment = [0] * n
increment = 0
i = 0
while(i < m):
  line = map(int, raw_input().split())
  t = line[0]
  if(t == 1):
    v = line[1] - 1
    x = line[2]
    array[v] = x
    passed_increment[v] = increment
  elif(t == 2):
    y = line[1]
    increment += y
  else:
    q = line[1]
    q = q - 1
    third = increment - passed_increment[q] + array[q]
    print third
  i += 1
  x = 0
  v = 0
  y = 0
  q = 0
  t = 0
