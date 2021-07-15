/*
accept number from user and return the count of digits in between 3 and 7.
*/
#include<stdio.h>

int CountDigit( int no)
{
      int digit = 0;
      int Cnt = 0;
      
      if( no< 0)
      {
            no = - no;
      }
      
      while(no != 0)
      {
            digit = no % 10;
            if( digit <7 && digit >3)
            {
                  Cnt++;
            }
            no = no/10 ;
      }
      return Cnt;
}
int main()
{
       int Number = 0;
       int Ret = 0;
       
       printf("Enter Number:");
       scanf("%d",&Number);
       
       Ret = CountDigit( Number);
       
       printf("Frequency of digit in between 3 and 7  is: %d", Ret);
         
       return 0;
}

