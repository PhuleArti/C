/*
Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements : 85  66  3  80  93  88
Output :  3
               
*/
#include<stdio.h>
#include<stdlib.h>

int CountEven( int arr[], int size)
{
         int cnt = 0;
         int Counter = 0;
         
         for(cnt = 0; cnt < size ; cnt++)
         {
                if((arr[cnt] %2) ==0)
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
        
        ret = CountEven( ptr, length);
        
        printf("Even elements : %d",ret);
        
        free(ptr);
        
        return 0;
        
}
