//////////////////////////////////////////////////////////////////////
// File name :       program4.c
// Discription :     It is Recusive program to find minimum digit from
//                   given number.
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<limits.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   Min
// Discription :     It is used to return minimium digit.
// Input  :          int
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

int Min(int iNo)
{
    static int iMin = INT_MAX; 
    int iDig = 0;

    //filter
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo == 0)
    {
        return iMin;
    }
    else
    {
        iDig = iNo % 10;
        if(iMin > iDig)
        {
            iMin = iDig;
        }    
        iNo = iNo / 10;
        Min(iNo);
    }
} 

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("Minimum digit are : %d\n",iRet);

    return 0;
}