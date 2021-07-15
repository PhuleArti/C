/*
accept number from user and count frequency of 2 in it.
*/
#include<stdio.h>

int CountTwo( int no)
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
            if( digit == 2)
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
       
       Ret = CountTwo( Number);
       
       printf("Frequency of digit 2 is: %d", Ret);
         
       return 0;
}

