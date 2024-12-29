#include <stdio.h>
#include <string.h>

int main(){

 char fname[] = "Taofeek";
 char sname[] = "Abdulazeez";

  //strcpy(fname , sname);                   // sname is assigned to fname (i.e fname = sname)
  //strncpy(fname , sname , 5);              // 1st n characters of sname is assigned to fname (replace)

  //strupr(fname);                           // returns UPPERCASE 
  //strlwr(fname);                           // returns lowercase

  //strcat(fname , sname);                   // join fname to sname
  //strncat(fname , sname ,1);               // join n characters of sname with fname

  //strset(fname , 'A');                      // set fname to a single character
  //strnset(fname , 'A' , 1);                 // sets 1st n names of fname

  //int Len = strlen(fname);                  // returns the no of charcters of the string

  //int compare = strcmp(fname , sname);        //returns 0 if they are the same and 1 otherwise
  //int compare = strncmp(fname , sname , 2);

  //int compare = strcmpi(fname , sname); 
  //int compare = strncmp(fname , sname , 4);





 
 

  printf("%s" , fname);
  //printf("\n%d" , compare);
 

 return 0;
}