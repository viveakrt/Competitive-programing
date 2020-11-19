#include<stdio.h>
int main(){
    char c[100]={0};
    int i,j,f=0;
    
    scanf("%s",&c);
    j  = sizeof(c)/sizeof(char);
    printf("%d",j);
    if(j%2==0){
        for(i=0;i<j/2;i++){

        if(c[i]!=c[j/2+i]){
            f=1;
            break;
        }
        };
    }else{
        for(i=0;i<j/2;i++){

        if(c[i]!=c[j/2+i+1]){
            f=1;
            break;
        }
        };
    }
    if(f==1){
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    
    for(i=0;i<j;i++){

        printf("%c",c[i]);
        
    };
    for(i=j-1;i>=0;i--){

        printf("%c",c[i]);
        
    };
return 0;
}