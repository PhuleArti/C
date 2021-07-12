/*
Problem statement:
Accept one number from user and print that number of * on screen
*/
#include<stdio.h>

void Print( int iNo1)
{
     if(iNo1<0)
     {
          iNo1=-iNo1;
     }
     
     while(iNo1>0)
     {
          printf("*\t");
          iNo1--;
     }
}
int main()
{
      int iValue1=0;
      
      printf("Enter value:");
      scanf("%d",&iValue1);
      
      Print(iValue1);
      
      return 0;
}
