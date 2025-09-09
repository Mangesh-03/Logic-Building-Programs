//////////////////////////////////////////////////////////////////////
// File name :       program4.cpp
// Discription :     It is generic program to accept N values and search last occurrence of any
//                   specific value.
// Author :          Mangesh Ashok Bedre
// Date :            27/08/2025
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
//
// Function name :   SearchFirst
// Discription :     Return index of Last occurence of element .
// Input  :          T*,T,T
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            27/08/2025
//
//////////////////////////////////////////////////////////////////////
template<typename T>
int SearchFirst(T *arr ,T iSize,T iNo)
{
    int iCnt = 0;
    int ind = 0;

    for(iCnt = 0 ; iCnt < iSize;iCnt++)
    {
        if(arr[iCnt] ==  iNo)
        {
            ind = iCnt;
        }
    }
    return ind+1;
}

// Entry Point Function.
int main()
{

    int arr[] = {10,20,30,10,50,60,10,50};
    int iRet = 0;

    iRet = SearchFirst(arr,8,50);

    cout<<"50 Appread last time at index : "<<iRet<<"\n";

    return 0;
}