https://www.hackerrank.com/challenges/minimum-distances/submissions/code/206769981

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,min=100000; 
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            if(a[i]==a[j] && j-i<min)
            min=j-i;
    }
    if(min==100000)
        min=-1;
    printf("%d",min);
    return 0;
}
