/*
Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
Input : N : 6
Elements : 85  66  3  80  93  88
Output :53  (234 - 181) 
               
*/
#include<stdio.h>
#include<stdlib.h>

int Difference( int arr[], int size)
{
         int sum1 = 0;
         int sum2 = 0;
         int differ = 0 ;
         int cnt = 0;
         
         for(cnt = 0; cnt < size ; cnt++)
         {
                if((arr[cnt] %2) ==0)
                {
                          sum1 = sum1 + arr[cnt];
                }
                else
                {
                          sum2 = sum2 + arr[cnt];
                }
                
         }
         differ = sum1 - sum2;
         return differ;
}
int main()
{
        int length = 0;
        int cnt = 0;
        int ret = 0;
        int * ptr = NULL;
        
        printf("Enter number of elements:");
        scanf("%d",&length);
        
        ptr = (int *) malloc (length* sizeof(int));
        
        if(ptr == NULL)
        {
               printf("Unable to allocate memory:");
               return -1;
        }
        
        printf("Elements are:");
        
        for(cnt = 0 ; cnt < length ; cnt++)
        {
                scanf("%d", &ptr[cnt]);
        }
        
        ret = Difference( ptr, length);
        
        printf("difference between summation of even elements and odd elements is %d",ret);
        
        free(ptr);
        
        return 0;
        
}
