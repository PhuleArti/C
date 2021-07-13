/*
Problem statement:
Write a program which accept number from user and return difference between summation of all its factors and non factors.
Input : 12      output : -34
*/
#include<stdio.h>

int FactDifference( int iNo)
{
       int i =0 ;
       int iSum_1= 1;
       int iSum_2=1;
       
       if(iNo < 0)
       {
            iNo= -iNo;
       }
       
       for( i= 1 ; i<iNo ; i++)
       {
            if( iNo % i == 0)
            {
                  iSum_1 = iSum_1 +i ;
            }
            else
            if  ( iNo % i != 0)
            {
                 iSum_2 = iSum_2 + i;
            }
       }
       return (iSum_1 -iSum_2);
}
int main()
{
       int iValue = 0;
       int iRet=0;
       
       printf("Enter number:");
       scanf("%d", &iValue);
       
       iRet =FactDifference( iValue);
       
       printf("The Difference between Summation of non factors and factors  of a given number is : %d",iRet);
       
       return 0;
}
