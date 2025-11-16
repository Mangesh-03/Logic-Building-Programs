//////////////////////////////////////////////////////////////////////
// File name :       program2.c
// Discription :     It is Recusive program to find maximum digit from
//                   given number.
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   Max
// Discription :     It is used to return maximium digit.
// Input  :          int
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

int Max(int iNo)
{
    static int iMax = 0; 
    int iDig = 0;

    //filter
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo == 0)
    {
        return iMax;
    }
    else
    {
        iDig = iNo % 10;
        if(iMax < iDig)
        {
            iMax = iDig;
        }    
        iNo = iNo / 10;
        Max(iNo);
    }
} 

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("Maximum digit are : %d\n",iRet);

    return 0;
}