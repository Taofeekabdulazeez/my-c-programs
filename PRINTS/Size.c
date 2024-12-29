#include <stdio.h>
int main(){

 int score = 95;
 double gpa = 4.81;
 char grade = 'A';
 char class[] = "Firstclass";

  printf("%d byte" , sizeof(char));
  printf("\n%d bytes" , sizeof(short));
  printf("\n%d bytes" , sizeof(int)); //*
  printf("\n%d bytes" , sizeof(long));
  printf("\n%d bytes" , sizeof(float));
  printf("\n%d bytes" , sizeof(double));
  



 return 0;
}