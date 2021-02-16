for _ in range(int(input())):

    n=input()
    if len(n)>10:
        print("{}{}{}".format(n[0],len(n)-2,n[-1]))
    else:
        print(n)
