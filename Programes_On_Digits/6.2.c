/*
accept number from user and check whether it contains 0 in it or not.
*/
#include<stdio.h>

typedef int Boolean;

#define TRUE 1
#define FALSE 0

Boolean ChkZero( int No)
{
       int digit = 0;
       
       if(No == 0)
       {
           return TRUE;
       }
       
       while (No != 0)
       {
             digit = No % 10;
             
             if(digit == 0)
             {
                 return TRUE ;
             }
             else
             {
                 return FALSE ; 
             }
       
             No = No /10 ;
       }

}
int main()
{
       int Number = 0;
       Boolean bRet = FALSE;
       
       printf("Enter Number:");
       scanf("%d",&Number);
       
       bRet = ChkZero( Number);
       
       if(bRet == TRUE)
       {
              printf("Number contains zero in it\n");
       }
       else
       {
              printf("Number does not contain zero in it\n");
       }
         
       return 0;
}

