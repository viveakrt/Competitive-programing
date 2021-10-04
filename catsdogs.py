t = int(input());

for _ in range(t):
	c, d, l = map(int, input().split(' '));

	max = 4*(d+c);

	if 2*d >= c:
		min = 4*d;
	else:
		min = 4*d + (c - 2*d) * 4;

	if l in range(min, max+1, 4):
		print("yes");
	else:
		print("no");