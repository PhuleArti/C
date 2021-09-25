/*
problem statement:
                                        Accept N numbers from user and return difference between frequency of even numbers and odd numbers.
*/
#include<stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE -2

int FrequencyDiff( int arr[] , int No)
{
       int cnt = 0;
       int even = 0;
       int odd = 0;
       
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
             if(arr[cnt] % 2 == 0)
             {
                    even++;
             }
             else
             {
                   odd++;
             }
       }
       return even - odd;
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
      
      ret = FrequencyDiff( ptr, value);
      
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
            printf("the frequency difference between of even & odd numbers is : %d\n", ret);
      }
      
      free(ptr);
      
      return 0;
} 
