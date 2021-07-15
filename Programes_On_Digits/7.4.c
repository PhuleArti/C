/*
accept number from user and return multiplication of all digits.
*/
#include<stdio.h>

int MultDigit( int no)
{
      int digit = 0;
      int Mult = 1;
      
      if( no< 0)
      {
            no = - no;
      }
      
      while(no != 0)
      {
            digit = no % 10;
            
            if( digit == 0)
            {
                digit = 1;
            }
            
            Mult = Mult* digit;
            
            no = no/10 ;
      }
      return Mult;
}
int main()
{
       int Number = 0;
       int Ret = 0;
       
       printf("Enter Number:");
       scanf("%d",&Number);
       
       Ret = MultDigit( Number);
       
       printf("Multiplication of digit  is: %d", Ret);
         
       return 0;
}

