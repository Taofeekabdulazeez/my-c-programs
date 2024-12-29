#include <stdio.h>
int main(){

 int numbs[] = {5, 10, 15, 20, 25, 30};

 // The variable numbs in the statement above is assigned to multiples values
 // Each value can be printed out by referring to its INDEX NUMBER
 // Note that INDEX NUMBER starts from 0 (range = 0 to 5)


 printf("\n%d" , numbs[0]); // This prints out the first value in the ARRAY
 printf("\n%d" , numbs[2]);
 printf("\n%d" , numbs[3]);
 printf("\n%d" , numbs[4]);
 printf("\n%d" , numbs[5]);
 printf("\n%d" , numbs[6]); // prints out a Garbage Value

  // To override or change a value, we refer to its INDEX NO
  numbs[3] = 100;

  printf("\n%d" , numbs[3]); // This prints out the new value




 return 0;
}