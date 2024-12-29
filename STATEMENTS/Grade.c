#include <stdio.h>

 int printgrade(int totalscore) {

 int totalscore;

 if(totalscore >= 70) {
  printf("A");
 }
 else if(totalscore >= 60) {
  printf("B");
 }
 else if(totalscore >= 50 ) {
  printf("C");
 }
 else if(totalscore >= 45) {
  printf("D");
 }
 else if(totalscore >= 40) {
  printf("D");
 }
 else {
  printf("F");
 }

return totalscore;
}

int main(){

 //int totalscore = 60;

 printf("%d" , printgrade(30));


 return 0;
}

