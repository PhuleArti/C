/*
accept number from user and count frequency of such a digits which are less than 6.
*/
#include<stdio.h>

int Count( int no)
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
            if( digit < 6)
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
       
       Ret = Count( Number);
       
       printf("Frequency of digit less than 6 is: %d", Ret);
         
       return 0;
}

