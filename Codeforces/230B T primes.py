# https://codeforces.com/problemset/problem/230/B

# ! Only those numbers are T-prime which are perfect sq and their sq. root is also prime

# ? By using the sieve of Eratosthenes algorithm, we are calculating the prime numbers up to 1000000 and checking they are prime or not
# ? Also checking that number is perfect Square
# ? By fulfilling these two conditions we can check for T-prime number
# ? limit = 1000000

def calculate_prime_flag_for_each_number_upto_limit():
    prime_flag = [True] * limit
    prime_flag[0] = prime_flag[1] = False
    for i in range(2,limit):
        if prime_flag[i] == True:
            for j in range(i*i, limit, i):
                prime_flag[j] = False
    return prime_flag                    

def check_if_a_number_is_t_prime(n):
    if n == 4:
        return True
    if n < 4 or n%2==0:
        return False
    sqrt_n = n**0.5
    if sqrt_n==int(sqrt_n):
        if prime_flag[int(sqrt_n)] == True:
            return True
    return False

prime_flag = calculate_prime_flag_for_each_number_upto_limit()
total_numbers = int(input())
input_array = list(map(int,input().split()))
for i in input_array:
    if check_if_a_number_is_t_prime(i)==True:
        print("YES")
    else:
        print("NO")