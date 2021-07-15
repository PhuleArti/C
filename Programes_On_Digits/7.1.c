/*
accept number from user and return the count of even digits.
*/
#include<stdio.h>

int CountEven( int no)
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
            if( digit % 2 == 0)
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
       
       Ret = CountEven( Number);
       
       printf("Frequency of Even digit  is: %d", Ret);
         
       return 0;
}

