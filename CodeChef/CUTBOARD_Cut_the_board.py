#https://www.codechef.com/problems/CUTBOARD
'''
Problem:
Given N x M chessboard. Make cuts on some of the edges but don’t cut the board into pieces. How many maximum such cuts can you make?

Explanation:
Note that we can make cuts between every two consecutive row of cells. There will be N - 1. Such rows to be cut. Within a row we can make M - 1 cuts. This way of cutting will make the board look like an extended E - shape structure. Refer to the figure for more understanding -

So number of cuts is (N - 1) \times (M - 1)(N−1)×(M−1)
'''

for _ in range(int(input())):
    a,b=map(int,input().split())
    print((a-1)*(b-1))