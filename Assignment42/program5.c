//////////////////////////////////////////////////////////////////////
// File name :       program5.c
// Discription :     It is Recusive program to accept number from user 
//                   and return product of its digits.
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   Product
// Discription :     It is used to return product of its digits.
// Input  :          int
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

int Product(int iNo)
{
    static int iMul = 1;
    int iDig = 0;
    
    //Filter
    if(iNo < 0) 
    {
        iNo = - iNo;
    }

    if(iNo == 1)
    {
        return iMul;
    }
    else    
    {
        iDig = iNo % 10;
        iMul = iMul * iDig;
        iNo = iNo / 10;
        Product(iNo);
    }
    
        
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Product(iValue);
    printf("product of digits of %d is %d\n",iValue,iRet);
    return 0;
}