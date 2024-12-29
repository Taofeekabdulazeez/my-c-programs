#include <stdio.h>
int main(){

 double g = 9.8;
 double pi = 3.142;
 double e = 2.718281828459045;

 printf("%f" , g);
 printf("\n%lf" , g);
 printf("\n%.3lf" , pi);
 printf("\n%lf" , e);
 printf("\n%.15lf" , e); // It retains its precison (15 decimal digits)


 return 0;
}