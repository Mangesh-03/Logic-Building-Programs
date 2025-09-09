//////////////////////////////////////////////////////////////////////
//
// File name :       program1.cpp
// Discription :     It is generic program which accept one value and one number from user. Print
//                   that value that number of times on screen.
// Author :          Mangesh Ashok Bedre
// Date :            27/08/2025
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
//
// Function name :   Display
// Discription :     Accept one value and one number from user. Print
//                   that value that number of times on screen.
// Input  :          T,T
// Output :          -
// Author :          Mangesh Ashok Bedre
// Date :            27/08/2025
//
//////////////////////////////////////////////////////////////////////

template<class T>
void Display(T value, int iSize)
{
    int icnt = 0;

    for(icnt = 0; icnt < iSize ;icnt++)
    {
        cout<<value<<"\t";
    }
    cout<<"\n";
}

int main()
{
    Display('M',7);
    Display(11,4);
    Display(3.7,6);
    return 0;
}