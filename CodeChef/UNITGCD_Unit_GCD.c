// https://www.codechef.com/APRIL20B/problems/UNITGCD   


#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t>0){
		t--;
		long long int i;
		long long int n;
		scanf("%lld", &n);
		if(n==1){
			printf("1");
			printf("\n");
		}
		else
			printf("%lld\n", n/2);
		if (n <= 3) {
			printf("%lld ", n);
			for(i = 1;i<=n;i++){
				printf("%lld ", i);
			}
		}
		else {
			printf("3 1 2 3\n");
			for(i=4;i<n;i=i+2){
				printf("2 ");
				printf("%lld %lld\n", i,i+1);
			}
			if (n%2 == 0){
				printf("1 ");
				printf("%lld\n", n );
			}
			
		}
	}
	return 0;
}
