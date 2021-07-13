/*
Problem statement:
Write a program which accept number from user and display its factors in decreasing order.
*/
#include<stdio.h>

void RevFactor( int iNo)
{
       int i =0 ;
       
       for( i=iNo/2 ; i>=1  ; i--)
       {
            if( iNo % i == 0)
            {
                  printf("%d\t", i);
            }
       }
}
int main()
{
       int iValue = 0;
       
       printf("Enter number:");
       scanf("%d", &iValue);
       
       RevFactor( iValue);
       
       return 0;
}
