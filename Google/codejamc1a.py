import sys
t = int(sys.stdin.readline())

for ts in range(1, t + 1):
    x, y, m = sys.stdin.readline().split()
    x, y = int(x), int(y)
    
    tm, ok = 0, 0
    for c in m:
        if c == 'S':
            y -= 1
        if c == 'N':
            y += 1
        if c == 'E':
            x += 1
        if c == 'W':
            x -= 1
        tm += 1
        if tm >= abs(x) + abs(y):
            ok = 1
            break
    print('Case #{}: {}'.format(ts, "IMPOSSIBLE" if not ok else tm))
