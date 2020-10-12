#include <stdio.h>
long long int cmpfunc (const void * a, const void * b) {
   return ( *(long long int*)b - *(long long int*)b);
}
void func();
int main()
{
  int t;
  scanf("%d", &t);
  while(t > 0)
  {
    func();
    t--;
  }
  return 0;
}
void func()
{
  long long int n, a[100000], i, count = 0;
  scanf("%lld", &n);
  for(i = 0; i < n; i++)
  {
    scanf("%lld",&a[i]);
    if(a[i] != 1)
      count = count + a[i] - 1; 
  }
  count++;
  printf("%lld\n", count);
}
