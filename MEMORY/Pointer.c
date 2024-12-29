#include <stdio.h>
int main(){

 int var = 5;
 int* ptr = &var; // POINTER variable


 printf("%d" , var); //prints out the value of var
 printf("\n");
 printf("%p" , &var); //prints out the memory address of var (using the reference operator '&')
 printf("\n");
 printf("%p" , ptr); //prints out the memory address of var (using the pointer variable)
 printf("\n");
 printf("%d" , *ptr); //prints out the value of var (using the dereference operator)


 return 0;
}