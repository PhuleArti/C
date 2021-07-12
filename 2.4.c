/*
Problem statement:
Accept two numbers from user and display first number in second
number of times.
*/
#include<stdio.h>

void Display( int iNo1,int Frequency)
{
      int i=0;
      
      if(Frequency < 0)
      {
            Frequency=-Frequency;
      }
      
      for(i=1; i<=Frequency; i++)
      {
             printf("%d\t",iNo1);
      }
}
int main()
{
     int iValue1=0;
     int iFrequency=0;
     
     printf("Enter value1:");
     scanf("%d",&iValue1);
     
     printf("Enter Frequency:");
     scanf("%d",&iFrequency);
     
     Display( iValue1,iFrequency);
     
     return 0;
}
