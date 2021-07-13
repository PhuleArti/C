/*
Problem statement:
Accept one character from user and convert case of that character.
Input: a     output: A
*/
#include<stdio.h>

char ChangeCase( char Ch)
{
       if(Ch >='a' && Ch<='z')
       {
              Ch = Ch - 32;
       }
       else if( Ch >='A' && Ch<='Z')
       {
             Ch = Ch + 32;
       }
       return Ch;
}
int main()
{
       char ch='\0';
       char cValue='\0';
       
       printf("Enter character:");
       scanf("%c",&ch);
       
        cValue = ChangeCase( ch);
        
        printf(" The conversion of character is: %c", cValue);
       
       return 0;
}
