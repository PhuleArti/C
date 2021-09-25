/*
problem statement:
                                        Accept N numbers from user and check elements contain 11 in it or not.
*/
#include<stdio.h>
#include<stdlib.h>

typedef int bool;

#define ERRMEMORY -1
#define ERRSIZE -2
#define TRUE 1
#define FALSE 0

int ChkNumber( int arr[] , int No)
{
       int cnt = 0;
       
       if(arr == NULL)
       {
             return ERRMEMORY;
       }
       if(No <= 0)
       {
             return ERRSIZE;
       }
       
       for(cnt = 0; cnt < No; cnt++)
       {
             if(arr[cnt] % 11 == 0)
             {
                    return TRUE;
             }
             else
             {
                    return FALSE;
             }
       }
}
int main()
{
      int value = 0;
      int cnt = 0;
      int * ptr = NULL;
      bool bret = FALSE;
      
      printf("Enter the no of elements:\n");
      scanf("%d", & value);
      
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
      
      bret = ChkNumber( ptr, value);
      
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
            printf(" 11 is present");
      }
      else
      {
            printf("11 is absent");
      }
      
      free(ptr);
      
      return 0;
} 
