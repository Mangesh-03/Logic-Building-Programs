//////////////////////////////////////////////////////////////////////
// File name :       program2.c
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
// Output :          1  2   3   4   5
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = 1;
    
    if(iNo < 1)
    {
        return;
    }
    else
    {
        printf("%d\t",i);
        iNo--;
        i++;
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