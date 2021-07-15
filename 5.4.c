/*
 a program which accept three numbers and print its multiplication.
 input : 7   0   5 
 output : 35
*/
#include<stdio.h>

int Multiplication( int no1, int no2, int no3)
{
       int Ans= 0;
       
       if(no1 == 0 && no2 == 0 && no3 == 0)
       {
             return 0;
       }
       
       if(no1 == 0)
       {
             no1=1;
       }
       if(no2 == 0)
       {
             no2 = 1;
       }
       if(no3 == 0)
       {
            no3 = 1;
       }
        
       Ans= no1 * no2 * no3;
       
       return Ans;
}
int main()
{
     int No1=0;
     int No2=0;
     int No3=0;
     int iRet =0;
     
     printf("Enter Three numbers:\n");
     scanf("%d%d%d", &No1,&No2,&No3);
     
     iRet = Multiplication( No1,No2,No3);
     
     printf("Multiplication of three nuumbers is: %d",iRet);
     
     return 0;
}
