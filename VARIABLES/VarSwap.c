#include <stdio.h>
int main(){

 int x = 6 , y = 7, var;

 var = x;
 x = y;
 y = var;

 printf("x=%d\ny=%d" , x,y);
 printf("\n%d" , var);




 return 0;

}