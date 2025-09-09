//////////////////////////////////////////////////////////////////////
//
// File name :       program2.cpp
// Discription :     generic program to accept N values and count frequency of any specific value.
// Author :          Mangesh Ashok Bedre
// Date :            27/08/2025
//
//////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
//
// Function name :   Frequency
// Discription :     Return Count of occurence of element .
// Input  :          T *,int ,T
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            27/08/2025
//
//////////////////////////////////////////////////////////////////////
template<class T>
int Frequency(T *Arr, int iSize,T iNo)
{
    int icnt = 0;
    int iCount = 0;

    for(icnt = 0; icnt < iSize ;icnt++)
    {
        if(Arr[icnt] == iNo)
        {
            iCount++;
        }
    }
   return iCount;
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    cout<<"Frequency : "<<iRet<<"\n";


    return 0;
}