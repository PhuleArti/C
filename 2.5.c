/*
Problem statement:
Accept number from user and check whether number is even or
odd.
*/
#include<stdio.h>

typedef int Boolean;

#define TRUE 1
#define FALSE 0

Boolean ChkEvenOdd( int iNo1)
{
      
       if(iNo1 % 2 == 0)
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
        
        printf("Enter Number:");
        scanf("%d",&iValue1);
        
        bRet=ChkEvenOdd( iValue1);
        
        if(bRet== TRUE)
        {
              printf("The given number is Even\n");
        }
        else
        {
              printf("The given number is Odd\n");
        }
        
        return 0;
}
