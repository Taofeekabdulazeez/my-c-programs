#include <stdio.h>

int main(){
                        //#######******** C OPEARATORS ********#######//


    ///////////////////01 ARITHMETIC OPERATORS/////////////////////

    int x=4, y=5;

    printf("ARITHMETIC OPERATORS");
    printf("\n%d\t%d" , x+y , x-y); //This prints out the sum and difference of the two numbers respectively
    printf("\n%d" , x*y);   //This prints the product of the two numbers
    printf("\n%d" , x/y);   //this returns the value without the remainder
    printf("\n%d" , x%y);   //This prints out the remainder
    printf("\n%d\t%d" , ++x , ++y);   //This add 1 to variable x and y respectively
    printf("\n%d\t%d" , --x , --y);   //This add 1 to variable x and y respectively



    ////////////////// 02 COMPARISON OPERATORS/////////////////////

    x=3, y=3; // The value has been reassigned to override the existing value of variable x and y

    printf("\nCOMPARISON OPERATORS");
    printf("\n%d" , x==y);  //Returns true(1) if x is equal to y and false(0) otherwise
    printf("\n%d" , x!=y);  //Returns true(1) if x is not equal to y and false(0) otherwise
    printf("\n%d" , x>y);   //Returns true(1) if x is greater than y and false(0) 
    printf("\n%d" , x<y);   //Returns true(1) if x is less than y and false(0) otherwise
    printf("\n%d" , x>=y);  //Returns true if if x is greater than or equal to y and false(0) otherwise
    printf("\n%d" , x<=y);  //Returns true(1) if x is less than or equal to y and false(0) otherwise



    ////////////////// 03 LOGICAL OPERATORS///////////////////////

    x=5 , y=10; //I reassigned need value to variable x and y

    printf("\nLOGICAL OPERATORS");
    printf("\n%d" , x<6 && y>=9);
    printf("\n%d" , !(x<6 && y>9));
    printf("\n%d" , x<12 || x!=4);
    //printf("\n%d" , x>3 || x=4);  This will generate an error because is more like a comparison statement
    printf("\n\n%d" , x&&y);    // This returns True(1) since the value of variable x and y are Non-zero
    printf("\n%d" , x||y);
    printf("\n%d" , x|y);    // This will add the two variables since the operand is single
    printf("\n%d\t%d" , 1&&3 , 1&3);  // A single operand can also be used in this case
    printf("\n%d" , 5&&0);     // This returns False(0) since one of the value is zero
    printf("\n%d\t%d" , 5||0 , x|y);

                                 
 



    ////////////////// 04 ASSIGNMENT OPERATORS////////////////////

    x=6;  //I reassigned new value to variable x

    printf("\nASSIGNMENT OPERATORS");
    printf("\n%d" , x=7);   //This changes the value of variable x
    printf("\n%d" , x+=3);  //This adds 3 to variable x (same as x=x+3)
    printf("\n%d" , x=x-2); //This subtracts 2 from variable x (same as x-=2)
    printf("\n%d" , x*=10); //This multiples variable x by 10 (same as x=x*10)
    printf("\n%d" , x/=8);  //This divides x by 8 (same as x=x/8);
    printf("\n%d" , x%=4);   
    



    return 0;

}