#include <stdio.h>
int main(){

 char sname[20] , fname[20];
 
 
 printf("\nEnter your Full name: ");
 // scanf("%s" , name);
 scanf("%s%s" , sname , fname);


 printf("\n********************************************************\n");

 // printf("Hello Mr %s, How are you doing?" , name);
 printf("Hello Mr %s %s, How are you doing?" , sname , fname);

 printf("\n********************************************************\n\n");


 return 0;
}