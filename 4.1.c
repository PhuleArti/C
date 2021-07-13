/*
Problem statement:
Write a program which accept number from user and display its multiplication of factors.
*/
#include<stdio.h>

int MultFactor( int iNo)
{
       int i=0;
       int iMult= 1;
       
       if(iNo == 0)
       {
            return 0 ;
       }
       
       for( i=1; i<= iNo/2; i++)
       {
              if(iNo % i ==0 )
              {
                 iMult = iMult * i;
              }
       }
       return iMult;
}
int main()
{
       int iValue = 0;
       int iRet = 0;
       
       printf("Enter number:");
       scanf("%d", &iValue);
       
       iRet = MultFactor( iValue);
       
       printf("The Factor multiplication of given number is : %d", iRet);
       
       return 0;
}
