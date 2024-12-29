#include <stdio.h>

int add(int , int);  //FUNCTION declaration

int main(){

 printf("%d" , add(5 , 6));

 return 0;
}

int add(int a , int b){

 //printf("%d" , a + b);  //FUNCTION definition

return a + b;
}