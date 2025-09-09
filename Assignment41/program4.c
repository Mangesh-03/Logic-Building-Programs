//////////////////////////////////////////////////////////////////////
// File name :       program4.c
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
// Output :          A  B   C   D   E   F
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////

void Display(int iNo)
{   
    static char ch = 'A';
    if(iNo < 1)
    {
        return;
    }
    else
    {
        printf("%c\t",ch);
        iNo--;
        ch++;
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