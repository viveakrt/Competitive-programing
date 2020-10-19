import numpy as np
import math

# change to main cache index
current_block = 0

def make_chunk(num, chunk):
    arr = np.arange(num)
    arr.resize((math.ceil(arr.shape[0]/chunk), chunk), refcheck=False)
    np.place(arr[-1], arr[-1] == 0, -1)
    return arr

def check_hit(arr, target):
    if arr[current_block].__contains__(target):
        return True
    return False

def cache_hit(n, b, m, index_list):
    global current_block
    change_block, current_block = 1, 0
    arr = make_chunk(n, b)
    for target in index_list:
        flag = True
        # print("here : ", current_block)
        for index in range(current_block, len(arr)):
            current_block = index
            if check_hit(arr, target):
                flag = False
                break
            change_block += 1
        if flag:
            for index in range(0, current_block):
                current_block = index
                if check_hit(arr, target):
                    break
                change_block += 1
    return change_block

# test_case = int(input())
# for case in range(test_case):
#     n, b, m = list(map(int, input().split(" ")))
#     index_list = list(map(int, input().split(" ")))
#     print(cache_hit(n, b, m, index_list))

# test-case
n, b, m = 5, 3, 3
index_list = [0, 3, 4]
print(cache_hit(n, b, m, index_list))
