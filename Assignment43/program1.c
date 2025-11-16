//////////////////////////////////////////////////////////////////////
// File name :       program1.c
// Discription :     It is Recusive program to count whitespaces in string
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   CountWhiteSpace
// Discription :     It is used to count whitespaces in given string
// Input  :          char *
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

int CountWhiteSpace(char * str)
{
    static int iCount = 0; 
    if(*str =='\0')
    {
        return iCount;
    }
    else
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        CountWhiteSpace(str);
    }
} 

int main()
{
    char ch[50] = {'\0'};
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^\n]s",ch);

    iRet = CountWhiteSpace(ch);
    printf("Whitespaces are : %d\n",iRet);

    return 0;
}