/*
 a program which accept two numbers and check whether numbers are
equal or not.
*/
#include<stdio.h>

typedef int Boolean;

#define TRUE 1
#define FALSE 0

Boolean ChkEqual(int No1, int No2 )
{
         if(No1 == No2)
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
      int Number_1=0;
      int Number_2=0;
      Boolean bRet= FALSE;
      
      printf("Enter First number:");
      scanf("%d",&Number_1);
      
      printf("Enter second number:");
      scanf("%d",&Number_2);
      
      bRet= ChkEqual( Number_1,Number_2);
      
      if(bRet == TRUE)
      {
             printf("Numbers are equal\n");
      }
      else
      {
             printf("Numbers are not equal\n");
      }
       
      return 0;
}
