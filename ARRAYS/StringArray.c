#include <stdio.h>
#include <string.h>
int main(){

 
 char names[][10] = {"Taofeek", "Taiwo", "Olanrewaju"};

 printf("%s" , names[0]);
 printf("\n%s" , names[1]);
 printf("\n%s" , names[2]);

  // To override or reassign a value, we refer to its INDEX NO and use the 'strcpy' function
  // To use the 'strcpy' function, <string.h> must be added to the header file

  strcpy(names[0] , "Abdulazeez");

  printf("\n%s" , names[0]); // This prints out the new String



 return 0;
}