def findGcd(m, n):
	while(m != n):
		if m > n:
			m = m - n;
		else:
			n = n - m;
	return m;

t = int(input());

for i in range(0, t):
	ing = list(map(int, input().split(' ')))

	n = ing[0];

	gcd = ing[1];

	for j in range(2, n+1):
		gcd = findGcd(gcd, ing[j]);

	for j in range(1, n+1):
		print(str(int(ing[j]/gcd)), end=' ');