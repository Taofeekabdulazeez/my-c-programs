#include <stdio.h>
int main(){

 const int oneMinute = 60;
 const int TEMP = 273;  // Declaring constant variable in Uppercase is a good practice
 const float PI = 3.142;

 printf("%d" , oneMinute);
 printf("\n%d" , TEMP);
 printf("\n%.3f" , PI);

   //int oneMinute = 59;
   // printf("\n%d" , oneMinute);
   /*
   NB: A constant can be overriden
   */



 return 0;
}