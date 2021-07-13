/*
Problem statement:
Write a program which accept number from user and print even factors of that number.
*/
#include<stdio.h>

void DisplayEvenFactor( int iNo1)
{
      int i = 0 ;
      
      if( iNo1 <= 0)
      {
             iNo1= -iNo1 ;
      }
      
      for( i=1; i <= iNo1; i++)
      {
             if((iNo1 % i) == 0 && ( i %2 ==0))
             {  
                   printf("%d\t",i);
             }      
      }
}
int main()
{
       int iValue1=0;
       
       printf("Enter Number:");
       scanf("%d", & iValue1);
       
       DisplayEvenFactor( iValue1);
        
       return 0;
}
