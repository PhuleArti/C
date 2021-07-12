/*problem statement:
                                     Program to divide two numbers.
 */
#include<stdio.h>

double Division(int iNo1,int iNo2)
{
       double iResult=0;
        
        if(iNo2==0)
        {
             return 0.0;
        }
       
       iResult= (double)iNo1/(double) iNo2;
       
       return iResult;
}
int main()
{
       int iValue1=0;
       int iValue2=0;
       double iRet=0;
       
       printf("Enter value1:");
       scanf("%d",&iValue1);
       
       printf("Enter value2:");
       scanf("%d",&iValue2);
       
       iRet=Division(iValue1,iValue2);
       
       printf("Division of two numbers is:%lf",iRet);
       
       return 0;
} 
