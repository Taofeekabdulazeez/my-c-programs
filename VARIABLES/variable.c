#include <stdio.h>
int main(){
   int score=95;
   double gpa=4.81;
   char grade='A';
   char class[]="Firstclass";

   printf("%d" , score);      //This prints an Integer 
   printf("\n%lf", gpa);    //This prints a decimal number
   printf("\n%.2lf", gpa);  // This prints a decimal number (in two decimal precision)
   printf("\n%c" , grade);    //This prints a Single character
   printf("\n%s" , class);    //This prints a STRING (series of characters)


  //*Some text can be added 
   printf("\n\n\nYour score is %d" , score);       
   printf("\nYour GPA is %.2lf" , gpa);     
   printf("\nYour grade is %c" , grade);   
   printf("\nYou graduated with a %s degree" , class);


  return 0;

}