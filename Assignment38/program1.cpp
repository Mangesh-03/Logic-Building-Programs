/////////////////////////////////////////////////////////////////////////
//
// File name :       program1.cpp 
// Discription :     Write generic program to multiply two numbers.
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   Multiply() 
// Discription :     returns multiplication of 2 numbers.
// Input   :         T,T
// Output  :         T
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
template<class T>
T Multiply(T No1, T No2)
{
   T Ans;
   Ans = No1 * No2;
   return Ans;
}

int main()
{
    int iRet = Multiply(10,20);
    printf("%d\n",iRet);

    float fRet = Multiply(10.0f,20.0f);
    printf("%f\n",fRet);

    return 0;
    
    return 0;
}