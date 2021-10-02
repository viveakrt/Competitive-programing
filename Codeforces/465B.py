#include <stdio.h>

#Question
#https://codeforces.com/problemset/problem/465/B
int main(void) {

  int num;
  scanf("%d", &num);
  int array[num], i = 0;
  
  while (i < num && scanf("%d", &array[i++]) == 1);
  
  int result = 0, space = 0;
  i = 0;
  while(i < num){
    if(array[i] == 1) {
      result++;
      if(space == 1) {
        result++;
        space--;
      }
      if((i+1) < num && array[i+1] == 0){
        space++;
      }
    }
    i++;
  }
  printf("%d", result);
  return 0;
}
