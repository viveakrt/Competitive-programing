# https://codeforces.com/problemset/problem/1197/A

qtd = int(raw_input())

i = 0
while(i < qtd):
  qtd_planks = int(raw_input())
  planks = map(int, raw_input().split())
  maxOne = max(planks)
  planks.remove(maxOne)
  maxTwo = max(planks)
  planks.remove(maxTwo)

  result = 0
  x = 0
  planks.sort()
  while((x + 2)  <= maxTwo and x < len(planks)):
    result+=1
    x+=1
  else:
    print result
  i+=1
