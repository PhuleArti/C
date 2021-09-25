/*
problem statement:
                                        Accept N numbers from user and return frequency of 11 number.
*/
#include<stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE -2

int Frequency( int arr[] , int No)
{
       int cnt = 0;
       int num = 0;
       
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
                    num++;
             }
       }
       return num;
}
int main()
{
      int value = 0;
      int cnt = 0;
      int ret = 0;
      int * ptr = NULL;
      
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
      
      ret = Frequency( ptr, value);
      
      if(ret == ERRMEMORY)
      {
            printf("Error: unable to allocate memory:");
            return -1;
      }
      else if( ret == ERRSIZE)
      {
            printf("Error: invalid size:");
      }
      else
      {
            printf("the frequency of 11 number is : %d\n", ret);
      }
      
      free(ptr);
      
      return 0;
}
