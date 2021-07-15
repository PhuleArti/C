/*
 program which accept one number from user and check whether that
number is greater than 100 or not.
*/
#include<stdio.h>

typedef int Boolean;

#define TRUE 1
#define FALSE 0

Boolean ChkNumber( int no)
{
      if(no < 100)
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
      int Number =0;
      Boolean bRet = FALSE;
      
      printf("Enter Number:");
      scanf("%d",& Number);
      
      bRet= ChkNumber( Number);
      
      if(bRet == TRUE)
      {
           printf("The given number is less than 100");
      }
      else
      {
          printf("The given number is greater than 100");
      }
      return 0;
}
