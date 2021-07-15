/*
 program which accept name from user and print that name
*/
#include<stdio.h>

int main()
{
      char Name[30] ={'\0'};
      
      printf("Enter Name:");
      scanf("%[^\n]s", Name);
      
      printf(" Your Entered Name is:%s\n",Name);
       
      return 0;
}
