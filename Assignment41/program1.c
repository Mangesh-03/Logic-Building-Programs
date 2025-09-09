//////////////////////////////////////////////////////////////////////
// File name :       program1.c
// Discription :     It is Recusive program to print certain pattern.
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   Display
// Discription :     It is used to print pattern.
// Input  :          int
// Output :          *  *   *   *   *
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 1)
    {
        return;
    }
    else
    {
        printf("*\t");
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}