//////////////////////////////////////////////////////////////////////
// File name :       program4.cpp
// Discription :     It is generic program to accept N values and reverse the contents.
// Author :          Mangesh Ashok Bedre
// Date :            27/08/2025
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
//
// Function name :   Reverse
// Discription :     Reverse the content .
// Input  :          T*
// Output :          -
// Author :          Mangesh Ashok Bedre
// Date :            27/08/2025
//
//////////////////////////////////////////////////////////////////////
template<typename T>
void Reverse(T *arr)
{
    T *start = NULL;
    T *end = NULL;
    T temp ;

    start = arr;
    end = &arr[7];

    while(end > start)
    {
        temp = *end;
        *end = *start;
        *start = temp;

        end--;
        start++;
    }
}
int main()
{
    int arr[] = {10,20,30,10,50,60,10,50};
    int iRet = 0;

    cout<<"Array elements before reverse are : \n";
    for(int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    Reverse(arr);

    cout<<"Array elements After reverse are : \n";
    
    for(int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<"\t";
    }


    return 0;
}