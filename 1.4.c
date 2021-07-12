/*
    problem statement:
    Accept one number and check whether it is divisible by 5 or not.
*/
#include<stdio.h>

typedef int Boolean;

#define TRUE 1
#define FALSE 0

Boolean Divisible(int iNo1)
{
      int iAns=0;
      
      iAns=iNo1%5;
      
      if(iAns==0)
      {
             return TRUE;
      }
      else
      {
            return FALSE;
      }
}
int main()
{
      int iValue1=0;
      Boolean bRet=FALSE;
      
      printf("Enter value:");
      scanf("%d",&iValue1);
      
      bRet= Divisible(iValue1);
      
      if(bRet==TRUE)
      {
            printf(" The given number is Divisible by 5:");
      }
      else
      {
            printf("The given number is non Divisible by 5");
      }
      
      return 0;
}
