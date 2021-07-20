/*
Accept N numbers from user and return frequency of 11 form it.
Input : N : 8
Elements : 85  11  3  80  11 88  34   78
Output :  2
               
*/
#include<stdio.h>
#include<stdlib.h>

int CountEleven( int arr[], int size)
{
         int cnt = 0;
         int Counter = 0;
         
         for(cnt = 0; cnt < size ; cnt++)
         {
                if(arr[cnt] == 11)
                {
                         Counter++;
                }    
         }
         return Counter ;
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
        
        ret = CountEleven( ptr, length);
        
        printf("frequency of 11  : %d",ret);
        
        free(ptr);
        
        return 0;
        
}
