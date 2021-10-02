# Question
# https://codeforces.com/problemset/problem/567/A

number = int(raw_input())
array = map(int, raw_input().split())
array.sort()
idxMax = number - 1

i = 0
while(i < number):
  if(i == 0):
    minimo = array[1] - array[0]
    maximo = array[idxMax] - array[0]
  elif(i == idxMax):
    minimo = array[idxMax] - array[idxMax - 1]
    maximo = array[idxMax] - array[0]
  else:
    if(abs(array[i] - array[i - 1]) < abs(array[i + 1] - array[i])):
      minimo = abs(array[i] - array[i - 1])
    else:
      minimo = abs(array[i + 1] - array[i])
    
    if(abs(array[idxMax] - array[i]) > abs(array[0] - array[i])):
      maximo = abs(array[idxMax] - array[i])
    else:
      maximo = abs(array[0] - array[i])
  print (str(minimo) + ' ' + str(maximo))
  i+=1
