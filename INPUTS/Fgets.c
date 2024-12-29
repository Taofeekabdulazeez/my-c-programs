#include <stdio.h>
int main(){

 char name[20];
 
 
 printf("\nEnter your Full name: ");
 fgets(name , 20 , stdin);

 printf("\n*********************************************\n");
 printf("Hello Mr %s, How are you doing?" , name);
printf("\n**********************************************\n");


 return 0;
}