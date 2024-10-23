#https://codeforces.com/problemset/problem/559/B

a = input()
b = input()
slen = len(a)

def check_odd_sized():
  if slen % 2 != 0: 
    if a == b:
      print("YES")
    else: 
      print("NO")
check_odd_sized()

def pair_sized(a_init, a_end, b_init, b_end):
  amid = (a_init + a_end) // 2
  bmid = (b_init + b_end) // 2
  c2a1 = equal(a_init, amid, b_init, bmid)
  c2a2 = equal(amid + 1, a_end, bmid + 1, b_end)
  c2a = c2a1 and c2a2
  if c2a: 
    return True
  c2b1 = equal(a_init, amid, bmid + 1, b_end) 
  c2b2 = equal(amid + 1, a_end, b_init, bmid)
  c2b = c2b1 and c2b2
  return c2b

def equal(a_init, a_end, b_init, b_end):
  if abs(a_end - a_init) == 0:
    return a[a_init:a_end+1] == b[b_init:b_end+1]
  ret = pair_sized(a_init, a_end, b_init, b_end)
  return ret

def check_pair_sized():
  if slen % 2 == 0: 
    end_index = slen - 1
    if equal(0, end_index, 0, end_index):
      print("YES")
    else: 
      print("NO")
check_pair_sized()
