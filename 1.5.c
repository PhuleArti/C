/*
problem statement:
Accept one number from user and print that number of * on screen.
*/
#include<stdio.h>

void Print( int iNo1)
{
       int i=0;
       
       if(iNo1<0)
       {
            iNo1=-iNo1;
       }
       
       for(i=1; i<=iNo1; i++)
       {
             printf("*\t");
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
