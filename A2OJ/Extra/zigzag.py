n=6
a,b=0,0
arr=[1,2,4,4,5,6]
for i in range(int(n-1)):
    if arr[i-1]>=arr[i]<=arr[i+1]:
        a=a+1
    if arr[i-1]<=arr[i]>=arr[i+1]:
        b=b+1

print(b if a>b else a)

def howMany(sentence):
    i = 0
    ans = 0
    n = len(sentence)
  
    while (i < n):
        c = 0  
        c2 = 0  
        c3 = 0   
        while (i < n and sentence[i] != ' '):
            if ((sentence[i] >= 'a' and sentence[i] <= 'z') or (sentence[i] >= 'A' and sentence[i] <= 'Z') or sentence[i] == '-'):
                c += 1
            elif (sentence[i] and (sentence[i] == ',' or sentence[i] == '.' or sentence[i] == '?' or sentence[i] == '!')):
                c3 += 1
            c2 += 1
            i += 1
        if (c + c3 == c2 and c > 0):
            ans += 1
        while (i < n and sentence[i] == ' '):
            i += 1
    return ans