/*
problem statement:
                                Accept N numbers from user and display all such elements which are
                                divisible by 5.
*/
#include<stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE -2

void  DivisibleFive( int arr[], int no)
{
     int cnt = 0;
     int No= 0;
     
     if(arr ==NULL)
     {
            return ;
     }
     if(no<= 0)
     {
         return ;
     }
     printf("the numbers which are divisible by  5 are:\n");
     for(cnt = 0; cnt < no; cnt++)
     {
          if(arr[cnt] %5 == 0)
          {
               printf("%d\t", arr[cnt]);
          }
     }
     
}
int main()
{
       int value = 0;
       int cnt = 0;
       int * ptr = NULL;
       
       printf("Enter the value of N:\n");
       scanf("%d",&value);
       
       ptr = (int *) malloc (sizeof(int)* value);
       
       if(ptr == NULL)
       {
             printf("Error : unable to allocate memory");
             return -1;
       }
       
       printf("Enter %d elements\n", value);
       for( cnt = 0; cnt < value ; cnt ++)
       {
            printf("Enter elements: %d\t", cnt+1);
            scanf("%d",&ptr[cnt]);
       }
       
       DivisibleFive( ptr, value);
        
       free(ptr);
             
       return 0;      
}
