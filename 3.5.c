/*
Problem statement:
Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not..
Input: E    output: TRUE
*/
#include<stdio.h>

typedef int Boolean ;

#define TRUE 1
#define FALSE 0

Boolean ChkVowel( char Ch)
{
       if( Ch== 'a' || Ch =='A' || Ch == 'e'|| Ch=='E'|| Ch == 'i' ||
            Ch == 'I'|| Ch =='o'||   Ch =='O' || Ch =='u' || Ch == 'U')
       {
             return TRUE;
       }
       else
       {
             return FALSE;
       }
}
int main()
{
       char ch ='\0';
       Boolean bRet = FALSE ;
       
       printf("Enter character:");
       scanf("%c",&ch);
       
       bRet= ChkVowel( ch);
       
       if(bRet == TRUE)
       {
               printf("The given character is vowel\n");
       }
       else
       {
               printf("The given character is not vowel\n");
       }
       return 0;
}
