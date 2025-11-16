//////////////////////////////////////////////////////////////////////
// File name :       program4.c
// Discription :     It is Recusive program to accept number from user 
//                   and return its factorial.
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   Factorial
// Discription :     It is used to return factorial of given number.
// Input  :          int
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    static int iFact = 1;
    
    if(iNo <= 1)
    {
        return iFact;
    }
    else    
    {
        iFact = iFact * iNo;
        iNo--;
        Factorial(iNo);
    }
    
        
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of %d is %d\n",iValue,iRet);
    return 0;
}