/*
problem statement:
                                Accept N numbers from user and return difference between summation
                                of even elements and summation of odd elements.
*/
#include<stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE -2

int SumDiff( int arr[], int no)
{
     int cnt = 0;
     int EvenSum = 0;
     int OddSum = 0;
     
     if(arr == NULL)
     {
           return ERRMEMORY;
     }
     if(no <= 0)
     {
           return ERRSIZE;
     }
     
     for(cnt = 0; cnt < no; cnt++)
     {
          if(arr[cnt] %2 == 0)
          {
               EvenSum = EvenSum + arr[cnt];
          }
          else
          {
               OddSum =OddSum + arr[cnt];
          }
     }
     
     return EvenSum - OddSum;
}
int main()
{
       int value = 0;
       int cnt = 0;
       int ret = 0;
       int * ptr = NULL;
       
       printf("Enter the value of N:");
       scanf("%d",&value);
       
       ptr = (int *) malloc (sizeof(int)* value);
       
       if(ptr == NULL)
       {
             printf("Error : unable to allocate memory");
             return -1;
       }
       
       printf("Enter elements of array:");
       for( cnt = 0; cnt < value ; cnt ++)
       {
            scanf("%d",&ptr[cnt]);
       }
       
       ret = SumDiff( ptr, value);
       
       if(ret == ERRMEMORY)
       {
            printf("unable to allocate memory");
            return -1;
       }
       else if(ret == ERRSIZE)
       {
            printf("invalid size:");
            return -1;
       }
       else
       {
             printf("the summation difference between even and odd numbers is%d", ret);
       }
       
       free(ptr);
             
       return 0;      
}
