/*
Problem statement:
Write a program which accept one number from user and print that number of even numbers on screen.
*/
#include<stdio.h>

void DisplayEven( int iNo1)
{
      int i = 0 ;
      
      if( iNo1 <= 0)
      {
             return ;
      }
      
      for( i=1; i <= iNo1; i++)
      {
             printf("%d\t", i*2);
      }
}
int main()
{
       int iValue1=0;
       
       printf("Enter Number:");
       scanf("%d", & iValue1);
       
       DisplayEven( iValue1);
        
       return 0;
}
