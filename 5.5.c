/*
 a program which accept total marks & obtained marks from user and
calculate percentage.
*/
#include<stdio.h>

float Percentage( int mark1, int mark2)
{
      float Percent = 0.0;
      
      Percent = mark2* 100 / mark1;
      
      return Percent;
}
int main()
{
      int Total_marks = 0;
      int Obtain_marks = 0;
      float fRet = 0.0;
      
      printf("Enter Total marks :");
      scanf("%d",&Total_marks);
      
      printf("Enter obtained marks of a student:");
      scanf("%d",&Obtain_marks);
      
      fRet = Percentage( Total_marks , Obtain_marks);
      
      printf(" Calculated Percentage are : %f", fRet);
            
      return 0;
}
