def run(y):
    if y[1]!=y[2] and y[2]!=y[3] and y[2]!=y[0] and y[1]!=y[3] and y[1]!=y[0] and y[3]!=y[0]:
        print(y)
    else:
        run(str(int(y)+1))       


def main():
    y=input()
    run(str(int(y)+1))

if __name__=="__main__":
    main()
