/*
Accept N numbers from user and display all such elements which are
divisible by 3 and 5.
Input : N : 6
Elements : 85  66  15  80  93  45
Output :    15  45
               
*/
#include<stdio.h>
#include<stdlib.h>

void Display ( int arr[], int size)
{
         int cnt = 0;
         
          printf("Elements which are divisible by 3 and 5 are :\n");
          
         for(cnt = 0; cnt < size ; cnt++)
         {
                if( ( (arr[cnt] % 3) == 0) && ( (arr[cnt] %5) ==0) )
                {
                      printf(" %d\t", arr[cnt]);
                }
         }
}
int main()
{
        int length = 0;
        int cnt = 0;
        int * ptr = NULL;
        
        printf("Enter number of elements:");
        scanf("%d",&length);
        
        ptr = (int *) malloc (length* sizeof(int));
        
        if(ptr == NULL)
        {
               printf("Unable to allocate memory:");
               return -1;
        }
        
        printf("Elements are :\n");
        
        for(cnt = 0 ; cnt < length ; cnt++)
        {
                scanf("%d", &ptr[cnt]);
        }
        
        Display( ptr, length);
        
        free(ptr);
        
        return 0;
        
}