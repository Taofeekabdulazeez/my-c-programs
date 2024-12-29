#include <stdio.h>
#include <math.h> // To perform mathematical tasks
int main(){

 int x = 81;
 float y = 1.4 , z = 0.5;

 

printf("%f" , sqrt(x));     //returns the square root of 
printf("\n%lf" , ceil(y));   //round y upwards to its nearest INT
printf("\n%f" , floor(y));  //round y downwards to its nearest INT
printf("\n%f" , pow(x, z)); //raises x to the power of z
printf("\n%d" , abs(x));    //NB: %d is used because the value of x is an INT
printf("\n%lf" , sin(30));
printf("\n%d" , asin(0.5));

 return 0;
}