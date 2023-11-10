import sys
import math

def howManyGames(p, d, m, s):
    t_l = 0
    if p % d != 0:
        t_l = p % d
    else:
        t_l = d
    d = -d
    t_n = ((t_l-p)/d) + 1
    t_sum = (t_n*(p+t_l))/2
    if s > t_sum:
        n = ((m-p)/d) + 1
        l = p+((n-1)*d)
        sn = (n*(p+l))/2
        return n+((s-sn)/m)
    
    else:
        x1 = abs(int(((-((2*p)-d))+math.sqrt((((2*p)-d)**2)-((4*d)*(-(2*s)))))/(2*d)))
        x2 = abs(int(((-((2*p)-d))-math.sqrt((((2*p)-d)**2)-((4*d)*(-(2*s)))))/(2*d)))
        l = p+((x1-1)*d)
        s1 = (x1*(p+l))/2
        l = p+((x2-1)*d)
        s2 = (x2*(p+l))/2
        if s1 <= s:
            return x1
        else:
            return x2

if __name__ == "__main__":
    p, d, m, s = raw_input().strip().split(' ')
    p, d, m, s = [int(p), int(d), int(m), int(s)]
    answer = howManyGames(p, d, m, s)
    print answer
