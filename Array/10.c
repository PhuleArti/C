/*
Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.
Input : N : 8      No : 34
Elements : 34  17  3  80  11 88  34   78
Output :  2
               
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency( int arr[], int size ,int No)
{
         int cnt = 0;
         int Counter = 0;
         
         for(cnt = 0; cnt < size ; cnt++)
         {
                if(arr[cnt] == No)
                {
                         Counter++;
                }    
         }
         return Counter ;
}
int main()
{
        int length = 0;
        int number = 0;
        int cnt = 0;
        int ret = 0;
        int * ptr = NULL;
        
        printf("Enter number of elements:");
        scanf("%d",&length);
        
        printf("Enter Number:");
        scanf("%d",&number);
        
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
        
        ret = Frequency( ptr, length, number);
        
        printf("frequency of  given Number is  : %d",ret);
        
        free(ptr);
        
        return 0;
        
}
