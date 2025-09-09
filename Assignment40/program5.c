//////////////////////////////////////////////////////////////////////
// File name :       program5.c
// Discription :     It is Recusive program to print certain pattern.
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function name :   Display
// Discription :     It is used to print pattern.
// Input  :          Nothing
// Output :          a  b   c   d   e   f
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////

void Display()
{
    static char ch = 'a';
    
    if(ch > 'f')
    {
        return;

    }
    else
    {
        printf("%c\t",ch);
        ch++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}