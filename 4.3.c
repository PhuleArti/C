/*
Problem statement:
Write a program which accept number from user and display all its non factors.
*/
#include<stdio.h>

void NonFactor( int iNo)
{
       int i =0 ;
       
       for( i= 1 ; i<=iNo ; i++)
       {
            if( iNo % i != 0)
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
       
       NonFactor( iValue);
       
       return 0;
}
