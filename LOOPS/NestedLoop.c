#include <stdio.h>
int main(){

 int numbs[][3] = {
                    {10, 20, 30},
                    {11, 22, 33}
                  };
         
  int i;
  for(i = 0; i < 2; i++) {
   
   int j;
   for(j = 0; j < 3; j++) {

     printf("\t%d" , numbs[i][j]);
     
   }
  
  {
    printf("\n");
  }
  

 }

 

 return 0;
}