/*
accept number from user and return difference between summation of even digits and summation of odd digits.
*/
#include<stdio.h>

int CountDiff( int no)
{
      int digit = 0;
      int Sum_1=0;
      int Sum_2=0;
      
      if( no< 0)
      {
            no = - no;
      }
      
      while(no != 0)
      {
            digit = no % 10;
            
            if( digit % 2 == 0)
            {
                 Sum_1 = Sum_1 + digit;
            }
            else 
            if( digit % 2 != 0)
            {
                 Sum_2 = Sum_2 + digit;
            }
              
            no = no/10 ;
      }
      return (Sum_1-Sum_2 ) ;
}
int main()
{
       int Number = 0;
       int Ret = 0;
       
       printf("Enter Number:");
       scanf("%d",&Number);
       
       Ret = CountDiff( Number);
       
       printf(" Difference between summation of even digit and odd digits  are : %d", Ret);
         
       return 0;
}

