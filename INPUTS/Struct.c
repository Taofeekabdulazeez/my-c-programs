#include <stdio.h>
#include <string.h>

 void add(int , int); 

   struct courses {
   char grade , code[10];
   int testscore, examscore, totalscore;
   //int totalscore = testscore + examscore;
 };
 //each variable in a struct are called MEMBERS


int main(){

  char studentname[25] = "Abdulazeez Taofeek Taiwo";
 
 struct courses csc111;
   // csc111.code[10] = "CSS111";
   strcpy(csc111.code , "CSC111");
   csc111.testscore = 40;
   csc111.examscore = 54;
   csc111.totalscore = csc111.testscore + csc111.examscore;
   csc111.grade = csc111.totalscore;
   

 struct courses gns111;
   strcpy(gns111.code , "GNS111");
   gns111.testscore = 27;
   gns111.examscore = 50;
   gns111.totalscore = gns111.testscore + gns111.examscore;

 struct courses ics101;
  strcpy(ics101.code , "ICS101");
  ics101.testscore = 24;
  ics101.examscore = 52;
  ics101.totalscore = ics101.testscore + ics101.examscore;

  struct courses mat111;
  strcpy(mat111.code , "MAT111");
  mat111.testscore = 22;
  mat111.examscore = 42;
  mat111.totalscore = mat111.testscore + mat111.examscore;

  struct courses mat113;
  strcpy(mat113.code , "MAT113");
  mat113.testscore = 28;
  mat113.examscore = 56;
  mat113.totalscore = mat113.testscore + mat113.examscore;

  struct courses phy115;
  strcpy(phy115.code , "PHY115");
  phy115.testscore = 14;
  phy115.examscore = 36;
  phy115.totalscore = phy115.testscore + phy115.examscore;

  struct courses phy191;
  strcpy(phy191.code , "PHY191");
  phy191.testscore = 27;
  phy191.examscore = 49;
  phy191.totalscore = phy191.testscore + phy191.examscore;

  struct courses plb101;
  strcpy(plb101.code , "PLB101");
  plb101.testscore = 30;
  plb101.examscore = 40;
  plb101.totalscore = plb101.testscore + plb101.examscore;

  struct courses sta121;
  strcpy(sta121.code , "STA121");
  sta121.testscore = 25;
  sta121.examscore = 58;
  sta121.totalscore = sta121.testscore + sta121.examscore;

  struct courses sta131;
  strcpy(sta131.code , "STA131");
  sta131.testscore = 23;
  sta131.examscore = 51;
  sta131.totalscore = sta131.testscore + sta131.examscore;

  struct courses tcs111;
  strcpy(tcs111.code , "TCS111");
  tcs111.testscore = 21;
  tcs111.examscore = 42;
  tcs111.totalscore = tcs111.testscore + tcs111.examscore;
 
 
 int input;

 printf("\n********************************************************\n");
 printf("SELECT A COURSE BELOW");
 printf("\n********************************************************\n");
 printf("\n 1.CSC111");
 printf("\n 2.GNS111");
 printf("\n 3.ICS101");
 printf("\n 4.MAT111");
 printf("\n 5.MAT113");
 
 printf("\n 6.PHY115");
 printf("\n 7.PHY191");
 printf("\n 8.PLB101");
 printf("\n 9.STA121");
 printf("\n10.STA131");
 printf("\n11.TCS111");

 printf("\n\n********************************************************\n");
 printf("Enter: ");
 scanf("%d" , &input);
 printf("\n********************************************************\n");


 switch (input) {

  case 1:
   printf("Dear %s, your %s result:" , studentname,csc111.code);
   printf("\nCA = %d" , csc111.testscore);
   printf("\nExam = %d" , csc111.examscore);
   printf("\nTOTAL = %d" , csc111.totalscore);
   printf("\nGRADE = ");
   add(csc111.testscore , csc111.examscore);
   printf("\n********************************************************\n");
   break;
   
  case 2:
   printf("Dear %s, your %s result:" , studentname,gns111.code);
   printf("\nCA = %d" , gns111.testscore);
   printf("\nExam = %d" , gns111.examscore);
   printf("\nTOTAL = %d" , gns111.totalscore);
   printf("\nGRADE = ");
   add(gns111.testscore , gns111.examscore);
   printf("\n********************************************************\n");
   break;

  case 3:
   printf("Dear %s, your %s result:" , studentname,ics101.code);
   printf("\nCA = %d" , ics101.testscore);
   printf("\nExam = %d" , ics101.examscore);
   printf("\nTOTAL = %d" , ics101.totalscore);
   printf("\nGRADE = ");
   add(ics101.testscore , ics101.examscore);
   printf("\n********************************************************\n");
   break;

  case 4:
   printf("Dear %s, your %s result:" , studentname,mat111.code);
   printf("\nCA = %d" , mat111.testscore);
   printf("\nExam = %d" , mat111.examscore);
   printf("\nTOTAL = %d" , mat111.totalscore);
   printf("\nGRADE = ");
   add(mat111.testscore , mat111.examscore);
   printf("\n********************************************************\n");
   break;
  
  case 5:
   printf("Dear %s, your %s result:" , studentname,mat113.code);
   printf("\nCA = %d" , mat113.testscore);
   printf("\nExam = %d" , mat113.examscore);
   printf("\nTOTAL = %d" , mat113.totalscore);
   printf("\nGRADE = ");
   add(mat113.testscore , mat113.examscore);
   printf("\n********************************************************\n");
   break;
  
  case 6:
   printf("Dear %s, your %s result:" , studentname,phy115.code);
   printf("\nCA = %d" , phy115.testscore);
   printf("\nExam = %d" , phy115.examscore);
   printf("\nTOTAL = %d" , phy115.totalscore);
   printf("\nGRADE = ");
   add(phy115.testscore , phy115.examscore);
   printf("\n********************************************************\n");
   break;
  
  case 7:
   printf("Dear %s, your %s result:" , studentname,phy191.code);
   printf("\nCA = %d" , phy191.testscore);
   printf("\nExam = %d" , phy191.examscore);
   printf("\nTOTAL = %d" , phy191.totalscore);
   printf("\nGRADE = ");
   add(phy191.testscore , phy191.examscore);
   printf("\n********************************************************\n");
   break;
  
  case 8:
   printf("Dear %s, your %s result:" , studentname,plb101.code);
   printf("\nCA = %d" , plb101.testscore);
   printf("\nExam = %d" , plb101.examscore);
   printf("\nTOTAL = %d" , plb101.totalscore);
   printf("\nGRADE = ");
   add(plb101.testscore , plb101.examscore);
   printf("\n********************************************************\n");
   break;

  case 9:
   printf("Dear %s, your %s result:" , studentname,sta121.code);
   printf("\nCA = %d" , sta121.testscore);
   printf("\nExam = %d" , sta121.examscore);
   printf("\nTOTAL = %d" , sta121.totalscore);
   printf("\nGRADE = ");
   add(sta121.testscore , sta121.examscore);
   printf("\n********************************************************\n");
   break;
  
  case 10:
   printf("Dear %s, your %s result:" , studentname,sta131.code);
   printf("\nCA = %d" , sta131.testscore);
   printf("\nExam = %d" , sta131.examscore);
   printf("\nTOTAL = %d" , sta131.totalscore);
   printf("\nGRADE = ");
   add(sta131.testscore , sta131.examscore);
   printf("\n********************************************************\n");
   break;
  

  case 11:
   printf("Dear %s, your %s result:" , studentname,tcs111.code);
   printf("\nCA = %d" , tcs111.testscore);
   printf("\nExam = %d" , tcs111.examscore);
   printf("\nTOTAL = %d" , tcs111.totalscore);
   printf("\nGRADE = ");
   add(tcs111.testscore , tcs111.examscore);
   printf("\n********************************************************\n");
   break;

  default:
  printf("Invalid input!");
  printf("\n********************************************************\n");

 }



 return 0;
}

void add(int a , int b){

 int totalscore = a + b;

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

}

