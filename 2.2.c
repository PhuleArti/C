/*
Problem statement:
Accept two numbers from user and perform division of that numbers.
*/
#include<stdio.h>

typedef int Boolean;

#define TRUE 1
#define FALSE 0

Boolean Division (int iNo1,int iNo2,double * ptr)
{
      double dResult=0.0;
     
      dResult=(double)iNo1/(double)iNo2;
      
      *ptr=dResult;
  
     if(iNo2<= 0)
      {
              return FALSE;
      }
      else
      {
             return TRUE;
      }  
}
int main()
{
      int iValue1=0;
      int iValue2=0;
      double dAns=0.0;
      Boolean bRet=FALSE;
      
      printf("Enter value1:");
      scanf("%d",&iValue1);
      
      printf("Enter value2:");
      scanf("%d",&iValue2);
      
      bRet= Division (iValue1,iValue2,&dAns);
      
      if(bRet== FALSE)
      {
             printf("Error: Invalid input");
      }
      else
      {
            printf("Division of two numbers: %lf",dAns);
      }
      
      return 0;
}
