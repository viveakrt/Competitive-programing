```py
def beautifulTriplets(d, arr):
    
    c = 0
    
    for i in arr:
        
        if i + d in arr and i + d*2 in arr:
            
            c += 1
    
    return c
      

if __name__ == '__main__':

    first_multiple_input = input().rstrip().split()

    n, d = int(first_multiple_input[0]), int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    print(beautifulTriplets(d, arr))
```
