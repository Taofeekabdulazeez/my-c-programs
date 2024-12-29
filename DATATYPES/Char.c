#include <stdio.h>
int main(){

  char a = 'A';
  char b = 65;    // -128 to 127 & 0 to 255 (signed & unsigned respectively)
  char c[] = "Hello"; 
  char d[] = {'H','e','l','l','o'};
  char e[] = {'H','e','l','l','o','\0'};
  char greetings[] = {'H','e','l','l','o',' ','w','o','r','l','d','\0'};
  


  printf("%c" , a);    //prints a single character
  printf("\n%d" , a);  //prints the numeric value
  printf("\n%c" , b);  //prints the ASCII value
  printf("\n%d" , b);  //prints the numeric value

  printf("\n%s" , c);  //prints a string of characters
  printf("\n%s" , d);  //prints out the string twice (because the null character wasn't included)
  printf("\n%s" , e);  //prints out a string of character (null character must be included)
  printf("\n%s" , greetings); //The spacing between the words must be quoted
 
  /*
  A string of characters can also be converted to numeric and ASCII value using %d and %c respectively

  The value of a specific character in a string can be changed by referring to it's index number,
  and using single quotes to assign new value
  */

  

 


 return 0;
}