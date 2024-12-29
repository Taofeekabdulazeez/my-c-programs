#include <stdio.h>
int main(){ 

 int a = 68;  // -2,147,483,648 to 2,147,483,647 (signed)
 unsigned int b = 231;  // 0 to 4,294,967,295 (unsigned) 

 short c = -28; // -32,768 to 32,767 (signed)
 unsigned short d = 28;  // 0 to 65,535 (unsigned)

 long long int e = 99999; // -9 Quintillion to 9 Quintillion (signed) 
 unsigned long long int f = 1876573483; // 0 to 18 Quintillion (unsigned)
      

  printf("\n%d" , a);
  printf("\n%d" , b);

  printf("\n%d" , c);
  printf("\n%u" , d);

  printf("\n%lld" , e);
  printf("\n%llu" , f);


 return 0;

}