def sumtracing(mx,n):
        s=0
        for i in range(n):
            s+=mx[i][i]
        return s

def less(order, number_left_top):
    count_row = 0
    ll=[]
    for rows in range(1, order + 1):
        latin = number_left_top + (rows - 1)
        if latin > order:
            latin = 1 + count_row
            count_row += 1
        row_counter = 0
        l=[]

        for row in range(1, order + 1):
            l.append(latin)
            latin += 1
            if latin > order:
                latin = 1 + row_counter
                row_counter += 1
        ll.append(l)

    return ll


def main():
    for _ in range(1,int(input())+1):
        order, trace=map(int, input().split())
        flag=False
        for i in range(1,order+1):
            x=less(order,i)
            if sumtracing(x,order)==trace:
                flag=True
                break

        if flag:
            print("Case #",end="")
            print(_,end="")
            print(": POSSIBLE")
            for i in x:
                print(*i,sep=" ")
        else:
            print("Case #",end="")
            print(_,end="")
            print(": IMPOSSIBLE")

if name == '__main__':
    main()
