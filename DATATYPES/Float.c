#include <stdio.h>
int main(){

 float g = 9.8;
 float pi = 3.142;
 float e = 2.718281828459045; 

 printf("%d" , g);
 printf("%f" , g);  
 printf("\n%f" , pi);
 printf("\n%.2f" , pi); // prints value in two decimal places
 printf("\n%f" , e);    // prints out only 6 deciaml digits
 printf("\n%.15f" , e); // Looses it precision (7 decimal digits)




 return 0;
}