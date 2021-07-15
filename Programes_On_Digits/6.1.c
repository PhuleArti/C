/*
Accept number from user and display its digits in reverse order.
*/
#include<stdio.h>

void RevDigits( int no)
{
      int digit = 0;
      
      if( no< 0)
      {
          no = - no;
      }
      
      printf(" Number in reverse order:");
      while(no != 0)
      {
            digit = no % 10;
            
            printf("%d",digit);
            
            no = no/10 ;
      }
}
int main()
{
       int Number = 0;
       
       printf("Enter Number:");
       scanf("%d",&Number);
       
       RevDigits( Number);
         
       return 0;
}

