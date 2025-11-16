//////////////////////////////////////////////////////////////////////
// File name :       program2.c
// Discription :     It is Recusive program to accept number from user 
//                   and return summation of its digits.
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   Sum
// Discription :     It is used to return summation of its digits.
// Input  :          int
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

int Sum(int iNo)
{
    static int iSum = 0;
    int iDig = 0;

    
    if(iNo <= 0)
    {
        return iSum;
    }
    else    
    {
        iDig = iNo % 10;
        iSum = iSum + iDig;
        iNo = iNo / 10;
        Sum(iNo);
    }
    
        
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);
    printf("Summation of digits of %d is %d\n",iValue,iRet);
    return 0;
}