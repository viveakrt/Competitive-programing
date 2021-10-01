https://www.hackerrank.com/challenges/cats-and-a-mouse/submissions/code/202586345

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,i,c1,c2,m;
    //printf("Enter number of test cases:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
       //printf("Enter cat1 pos,cat2 pos, Mouse pos:");
       scanf("%d %d %d",&c1,&c2,&m);
    
        if(abs(m-c2)>abs(m-c1))
        printf("Cat A");
        else if(abs(m-c2)<abs(m-c1))
        printf("Cat B");
        else
        printf("Mouse C");

        printf("\n");
    }
}
