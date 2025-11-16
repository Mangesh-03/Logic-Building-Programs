
//////////////////////////////////////////////////////////////////////
// File name :       program2.c
// Discription :     It is Recusive program which accept string from user 
//                   and count number of characters.
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   Strlen
// Discription :     It is used to return count number of characters.
// Input  :          char *
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

int Strlen(char * str)
{
    static int iCount = 0;
    
    if(*str == '\0')
    {
        return iCount;
    }
    else
    {
        iCount++;
        str++;
        Strlen(str);
    }   
        
}

int main()
{
    char ch[20] = {'\0'};
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^\n]s",ch);
    
    iRet = Strlen(ch);
    printf("Length of String is %d\n",iRet);

    return 0;
}