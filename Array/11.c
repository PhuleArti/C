/*
problem statement:
                                        Accept N numbers from user and accept one another number as NO ,
                                        and chk whether the number is present or not.
*/
#include<stdio.h>
#include<stdlib.h>

typedef int bool ;
#define TRUE 1
#define FALSE 0
#define ERRMEMORY -1
#define ERRSIZE -2

bool ChkNumber( int arr[] , int size, int No)
{
       int cnt = 0;
       int num = No;
       if(arr == NULL)
       {
             return ERRMEMORY;
       }
       if(size <= 0)
       {
             return ERRSIZE;
       }
       
       for(cnt = 0; cnt < size; cnt++)
       {
             if(arr[cnt] == num)
             {
                    return TRUE;
             }
       }
}
int main()
{
      int value = 0;
      int Num= 0 ;
      int cnt = 0;
      bool bret = FALSE;
      int * ptr = NULL;
      
      printf("Enter the no of elements:\n");
      scanf("%d", & value);
      
      printf("Enter  number:\n");
      scanf("%d",&Num);
      
      ptr = (int *) malloc (sizeof(int )* value);
      
      if(ptr == NULL)
      {
          printf("unable to allocate memory:");
          return -1;
      }
      
      printf("the %d elements are \n", value);
      for(cnt = 0; cnt< value ; cnt ++)
      {
            printf("Element: %d\t",cnt +1);
            scanf("%d",&ptr[cnt]);
      }
      
      bret = ChkNumber( ptr, value ,Num);
      
      if(bret == ERRMEMORY)
      {
            printf("Error: unable to allocate memory:");
            return -1;
      }
      else if( bret == ERRSIZE)
      {
            printf("Error: invalid size:");
      }
      else if(bret == TRUE)
      {
            printf("the given number is present");
      }
      else
      {
           printf("the given number is not present");
      }
      
      free(ptr);
      
      return 0;
}
