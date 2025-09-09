//////////////////////////////////////////////////////////////////////
// File name :       program2.c
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
// Output :          1   2   3   4   5
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////

void Display()
{
    static int i = 1;
    
    if(i > 5)
    {
        return;
    }
    else
    {
        printf("%d\t",i);
        i++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}