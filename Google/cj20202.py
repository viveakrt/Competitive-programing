def solve(t,result,prev):
    if prev != '' and t != '':
        if int(prev) > int(t[0]):
            for i in range(int(prev)-int(t[0])):
                result = result + ')'
    if t == '':
        for i in range(int(prev)):
            result = result + ')'
        return result
    if int(t[0]) == 0:
        return solve(t[1:],result + t[0],t[0])
    if int(t[0]) == 1:
        if prev != '':
            if int(prev) == 0:
                result = result + '(' + t[0]
            else:
                result = result + t[0]
        else:
            result = result + '(' + t[0]
        return solve(t[1:],result,t[0])
    if int(t[0]) > 1:
        if prev != '':
            for i in range(int(t[0]) - int(prev)):
                result = result + '('
            result = result + t[0]
        else:
            for i in range(int(t[0])):
                result = result + '('
            result = result + t[0]
        return solve(t[1:],result,t[0])
t = int(input())
for m in range(0,t):
    k = input()
    print('Case #{}: {}'.format(m + 1,solve(k,'','')))
