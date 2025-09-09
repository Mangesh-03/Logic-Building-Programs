//////////////////////////////////////////////////////////////////////
// File name :       program3.c
// Discription :     It is Recusive program to print certain pattern.
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   Display
// Discription :     It is used to print pattern.
// Input  :          Nothing
// Output :          5  4   3   2   1
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
        printf("%d\t",i);
        i--;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}