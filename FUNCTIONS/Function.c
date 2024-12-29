#include <stdio.h>

void functname(){         // This function doesn't return a value
printf("Ramadan Kareem"); // code to be executed when my function is called
}

void myfunction(char name[], int score, double gpa){
 
 printf("\n%s" , name);
 printf("\n%d" , score);
 printf("\n%lf" , gpa);

}

int main(){

 functname(); // The code in the function will be executed

 myfunction("Taofeek", 93, 4.81);


 return 0;
}