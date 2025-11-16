//////////////////////////////////////////////////////////////////////
// File name :       program5.c
// Discription :     It is Recusive program to reverse integer.
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<limits.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   Reverse
// Discription :     It is used to return reverse integer.
// Input  :          int
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    static int iRev = 0; 
    int iDig = 0;

    //filter
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo == 0)
    {
        return iRev;
    }
    else
    {
        iDig = iNo % 10;

        if((iRev < INT_MAX / 10) && (iRev * 10 > INT_MIN / 10) )
        {
            iRev = iRev * 10 + iDig;
        }
            
        iNo = iNo / 10;
        Reverse(iNo);
    }
} 

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("Reverse number are : %d\n",iRet);

    return 0;
}
 