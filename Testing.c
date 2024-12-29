#include <stdio.h>
int main(){

 int x , y, z;


 printf("\nEnter 1st number: ");
 scanf("%d" , &x);

 printf("\nEnter 2nd number: ");
 scanf("%d" , &y);

 printf("\nEnter 3rd number: ");
 scanf("%d" , &z);


 
 if (x > y && x > z)
 {
  printf("\n*********************\n");
  printf("%d is the largest" , x);
  printf("\n*********************\n");
 }

 else if(y > x && y > z)
 {
  printf("\n*********************\n");
  printf("%d is the largest" , y);
  printf("\n*********************\n");
 }

 else
 { 
  printf("\n*********************\n");
  printf("%d is the largest" , z);
  printf("\n*********************\n");
 }
 
 return 0;
}