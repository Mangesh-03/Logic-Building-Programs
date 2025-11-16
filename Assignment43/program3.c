//////////////////////////////////////////////////////////////////////
// File name :       program3.c
// Discription :     It is Recusive program to count small character in string
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   Small
// Discription :     It is used to count small character in given string
// Input  :          char *
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

int Small(char * str)
{
    static int iCount = 0; 
    if(*str =='\0')
    {
        return iCount;
    }
    else
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
        Small(str);
    }
} 

int main()
{
    char ch[50] = {'\0'};
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^\n]s",ch);

    iRet = Small(ch);
    printf("Small characters are in string : %d\n",iRet);

    return 0;
}