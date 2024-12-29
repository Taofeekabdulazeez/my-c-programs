#include <stdio.h>
int main(){

 int numbs[][4] = {
                  {1, 3, 5, 7},
                  {2, 4, 6, 8}
               };

               // NO of rows is Optiional (Parent)
               // NO of colums is a must 

   printf("%d" , numbs[0][0]);
   printf("%d" , numbs[0][1]);
   printf("%d" , numbs[0][2]);
   printf("%d" , numbs[0][3]);

   printf("\n");

   printf("%d" , numbs[1][0]);
   printf("%d" , numbs[1][1]);
   printf("%d" , numbs[1][2]);
   printf("%d" , numbs[1][3]);

  

 return 0;
}