// Problem: https://codeforces.com/contest/1083/problem/E
// Solution: Convex Hull Trick

#include <bits/stdc++.h>
using namespace std;

#define N 1000005

struct Rectangle
{
	long long w, h, a;
	bool operator < (const Rectangle & o) const
	{
		return w < o.w;
	}
};

struct Line
{
	long long m, c;
	long long f(long long x) {return m*x+c;}
};

Rectangle arr[N];

bool Check(Line l1, Line l2, Line l3)
{
	return (l1.c - l2.c) * (l3.m - l2.m) >= (l2.c - l3.c) * (l2.m - l1.m);
}

long double IntersecX(Line l1, Line l2)
{
	return (long double)(l1.c-l2.c) / (long double)(l2.m-l1.m);
}

int main()
{
	int n;
	scanf(" %d",&n);
	for(int i=1 ; i<=n ; i++)
	{
		long long w, h, a;
		scanf(" %lld %lld %lld",&w,&h,&a);
		arr[i] = {w, h, a};
	}
	sort(arr+1, arr+n+1);
	deque<Line> cht = {{0, 0}};
	int sz = 1;
	long long ans = 0;
	for(int i=1 ; i<=n ; i++)
	{
		while(sz >= 2 && cht[sz-1].f(arr[i].h) <= cht[sz-2].f(arr[i].h))
		{
			cht.pop_back();
			sz--;
		}
		long long c = cht.back().f(arr[i].h) + arr[i].w*arr[i].h - arr[i].a;
		ans = max(ans, c);
		Line now = {-arr[i].w, c};
		while(sz >= 2 && IntersecX(now, cht[0]) >= IntersecX(cht[0], cht[1]))
		{
			cht.pop_front();
			sz--;
		}
		cht.push_front(now);
		sz++;
	}
	printf("%lld\n",ans);
	return 0;
}
