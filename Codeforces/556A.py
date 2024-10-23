# Question
# https://codeforces.com/problemset/problem/556/A

num = raw_input()
string = raw_input()
i = 0
zero = 0
one = 0

while(i < len(string)):
  if(string[i] == '0'):
    zero+=1
  else:
    one+=1
  i+=1

result = 0
if(zero > one):
  result = zero - one
elif(zero < one):
  result = one - zero
else:
  result = zero - one

print result
