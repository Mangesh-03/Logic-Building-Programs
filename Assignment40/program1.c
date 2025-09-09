//////////////////////////////////////////////////////////////////////
// File name :       program1.c
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
// Output :          *   *   *   *   *
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////

void Display()
{
    static int i = 5;
    
    if(i < 1)
    {
        return;
    }
    else
    {
        printf("*\t");
        i--;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}