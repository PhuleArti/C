/*
Problem statement:
Write a program which accept number from user and return summation of all its non factors.
*/
#include<stdio.h>

int SumOfNonFactor( int iNo)
{
       int i =0 ;
       int iSum= 0;
       
       for( i= 1 ; i<=iNo ; i++)
       {
            if( iNo % i != 0)
            {
                  iSum = iSum +i ;
            }
       }
       return iSum;
}
int main()
{
       int iValue = 0;
       int iRet=0;
       
       printf("Enter number:");
       scanf("%d", &iValue);
       
       iRet = SumOfNonFactor( iValue);
       
       printf("The Summation of non factors of a given number is : %d",iRet);
       
       return 0;
}
