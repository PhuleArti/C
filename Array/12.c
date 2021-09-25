/*
problem statement:
                                        Accept N numbers from user and accept one another number as NO ,
                                        return index of first occurrence of that NO.    
*/
#include<stdio.h>
#include<stdlib.h>

int FirstOccurence( int arr[] , int size, int No)
{
       int cnt = 0;
       int num = No;
      
       
       for(cnt = 0; cnt < size; cnt++)
       {
             if(arr[cnt] == num)
             {
                   // return cnt;
                    break;
             }
       }
       if(cnt == size)
       {
             return -1;
       }
       else
       {
             return cnt;
       }
}
int main()
{
      int value = 0;
      int Num= 0 ;
      int cnt = 0;
       int ret = 0 ;
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
      
      ret = FirstOccurence( ptr, value ,Num);
      
      if(ret == -1)
      {
              printf("Their is no such occurence\n");
      }
      else
      {
                printf("First occurence of given number is %d", ret);
      }
      
      free(ptr);
      
      return 0;
}
