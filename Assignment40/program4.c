//////////////////////////////////////////////////////////////////////
// File name :       program4.c
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
// Output :          A  B   C   D   E   F
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////

void Display()
{
    static char ch = 'A';
    
    if(ch > 'F')
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