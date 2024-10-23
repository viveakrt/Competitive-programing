# Question
# https://codeforces.com/contest/560/problem/A

number = int(raw_input())
notas = map(int, raw_input().split())
notas.sort()

maximo = 1000000
rest = 0
soma = 1
flag = True
i = number - 1
while(soma < maximo and flag):
  rest = soma
  while(i >= 0):
    rest = rest % notas[i]
    if(rest == 0):
      break
    i-=1
  else:
    if(rest != 0):
      flag = False
    i = number - 1
  soma+=1

if(soma == maximo):
  print -1
else:
  print soma - 1
