/*
Accept N numbers from user check whether that numbers contains 11 in it or not.
Input : N : 7
Elements : 85  66  3  80  11  88  98
Output :  true  (11 is present in it).
               
*/
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEleven( int arr[], int size)
{
         int cnt = 0;
         
         for(cnt = 0; cnt < size ; cnt++)
         {
                if(arr[cnt] ==11)
                {
                      return TRUE;
                }    
         }
}
int main()
{
        int length = 0;
        int cnt = 0;
        BOOL bret = FALSE;
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
        
        bret = ChkEleven( ptr, length);
        
        if(bret == TRUE)
        {
               printf("Elements contains 11 ");
        }
        else
        {
              printf("Elements does not contain 11");
        }
        
        free(ptr);
        
        return 0;
        
}
