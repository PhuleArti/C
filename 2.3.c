/*
Problem statement:
Accept on number from user if number is less than 10 then print
“Hello” otherwise print “Demo".
*/
#include<stdio.h>

void Print( int iNo1)
{
      if( iNo1 < 10)
      {
              printf("Hello");
      }
      else
      {
             printf("Demo");
      }
}
int main()
{
      int iValue1=0;
      
      printf("Enter value:");
      scanf("%d",&iValue1);
      
      Print( iValue1);
      
      return 0;
}
