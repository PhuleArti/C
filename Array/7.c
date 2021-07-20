/*
Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements : 85  66  3  80  93  88  98
Output :  1  (4 - 3)
               
*/
#include<stdio.h>
#include<stdlib.h>

int CountDifference( int arr[], int size)
{
         int cnt = 0;
         int Difference = 0;
         int Counter_1= 0;
         int Counter_2= 0;
         
         for(cnt = 0; cnt < size ; cnt++)
         {
                if((arr[cnt] %2) ==0)
                {
                        Counter_1++;
                }
                else
                {
                        Counter_2++;
                }    
         }
         return Difference = Counter_1 - Counter_2 ;
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
        
        printf("Elements are:\n");
        
        for(cnt = 0 ; cnt < length ; cnt++)
        {
                scanf("%d", &ptr[cnt]);
        }
        
        ret = CountDifference( ptr, length);
        
        printf("difference between number of even elements and number of odd elements : %d",ret);
        
        free(ptr);
        
        return 0;
        
}
