/*
problem statement:
                                        Accept N numbers from user and accept one another number as NO ,
                                        return frequency of NO form it.
*/
#include<stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE -2

int Frequency( int arr[] , int size, int No)
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
       
       for(cnt = 0; cnt < size; cnt++)
       {
             if(arr[cnt] % No == 0)
             {
                    num++;
             }
       }
       return num;
}
int main()
{
      int value = 0;
      int Num= 0 ;
      int cnt = 0;
      int ret = 0;
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
      
      ret = Frequency( ptr, value ,Num);
      
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
            printf("the frequency of  number is : %d\n", ret);
      }
      
      free(ptr);
      
      return 0;
}
