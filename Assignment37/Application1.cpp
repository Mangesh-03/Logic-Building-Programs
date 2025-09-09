/////////////////////////////////////////////////////////////////////////
//
// File name :       Application.cpp 
// Discription :     Different functionality of array
// Author :          Mangesh Ashok Bedre
// Date :            25/07/2025
//
/////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;

    public:
    Array(int value = 10)
    {
        cout<<"Inside Connstructor\n";

        this->size = value;
        this->Arr = new int[size];
        
    }
    Array(Array &ref)
    {
        cout<<"Inside copy connstructor\n";

        this->size = ref.size;
        this->Arr = new int[this->size];

        for(int i = 0;i<size;i++)
        {
            this->Arr[i] = ref.Arr[i];
        }
    }
    ~Array()
    {
        cout<<"Inside Destructor\n";
        delete []Arr;
    }


    inline void Accept();
    inline void Display();

};

void Array::Accept()
{

    cout<<"Please enter the values\n";

    for(int i = 0;i < this->size;i++)
    {
        cin>>Arr[i];
    }
}
void Array::Display()
{
    cout<<"Elements are\n";
    for(int i = 0;i < this->size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}
class ArrSearch : public Array
{
    public:

    ArrSearch(int no = 10) : Array(no)
    {}
    
    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};

/////////////////////////////////////////////////////////////////////////
//
// Function name :   SearchFirst 
// Discription :     Return the index of the first occurrence of the element.
// Input    :        int
// Output  :         int
// Author :          Mangesh Ashok Bedre
// Date :            25/07/2025
//
/////////////////////////////////////////////////////////////////////////
int ArrSearch::SearchFirst(int value)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}
/////////////////////////////////////////////////////////////////////////
//
// Function name :   Frequency 
// Discription :     return frequency of element .
// Input    :        int
// Output  :         int
// Author :          Mangesh Ashok Bedre
// Date :            25/07/2025
//
/////////////////////////////////////////////////////////////////////////
int ArrSearch::Frequency(int value)
{
    int icnt = 0;

    for(int i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            icnt++;
        }
    }
    return icnt;
}
/////////////////////////////////////////////////////////////////////////
//
// Function name :   SearchLast
// Discription :     Return the index of the last occurrence of the element.
// Input    :        int
// Output  :         int
// Author :          Mangesh Ashok Bedre
// Date :            25/07/2025
//
/////////////////////////////////////////////////////////////////////////
int ArrSearch::SearchLast(int value)
{
    int icnt = 0;
    int index = 0;
    bool Flag = false;

    for(icnt = 0 ; icnt < size; icnt++)
    {
        if(Arr[icnt] == value)
        {
           index = icnt; 
           Flag = true;
        }
    
    }
    if(Flag == false)
    {
        return -1;
    }
    else
    {
        return index+1;
    }

    
}
/////////////////////////////////////////////////////////////////////////
//
// Function name :   EvenCount
// Discription :     Return the Even count of element from array.
// Input    :        -
// Output  :         int
// Author :          Mangesh Ashok Bedre
// Date :            25/07/2025
//
/////////////////////////////////////////////////////////////////////////
int ArrSearch::EvenCount()
{
    int icnt = 0;
    int iCountEven = 0;

    for(icnt = 0 ; icnt < size; icnt++)
    {
        if((Arr[icnt] % 2) == 0)
        {
            iCountEven++;
        }
    }

    return iCountEven;
}
/////////////////////////////////////////////////////////////////////////
//
// Function name :   OddCount
// Discription :     Return the odd count of element from array.
// Input    :        -
// Output  :         int
// Author :          Mangesh Ashok Bedre
// Date :            25/07/2025
//
/////////////////////////////////////////////////////////////////////////
int ArrSearch::OddCount()
{
    int icnt = 0;
    int iCountOdd = 0;

    for(icnt = 0 ; icnt < size; icnt++)
    {
        if((Arr[icnt] % 2) != 0)
        {
            iCountOdd++;
        }
    }

    return iCountOdd;
}
/////////////////////////////////////////////////////////////////////////
//
// Function name :   SumAll
// Discription :     Return the sum of all element from array.
// Input    :        -
// Output  :         int
// Author :          Mangesh Ashok Bedre
// Date :            25/07/2025
//
/////////////////////////////////////////////////////////////////////////
int ArrSearch::SumAll()
{
    int icnt = 0;
    int iSum = 0;

    for(icnt = 0 ; icnt < size; icnt++)
    {
        iSum = iSum + Arr[icnt];
    }

    return iSum;
}


int main()
{
    int iValue = 0;
    
    cout<<"Enter the number of element you want to store : \n";
    cin>>iValue;
    ArrSearch sobj(iValue);

    sobj.Accept();
    sobj.Display();
    
    cout<<"Enter number whose frequency you want to find :\n ";
    cin>>iValue;
    int iRet = sobj.Frequency(iValue);
    cout<<"Frequency is : "<<iRet<<"\n";

    cout<<"Enter number whose first occurance you want to find : \n";
    cin>>iValue;
    iRet = sobj.SearchFirst(iValue);
    cout<<"First occurance is : "<<iRet<<"\n";

    cout<<"Enter number whose last occurance you want to find : \n";
    cin>>iValue;
    iRet = sobj.SearchLast(iValue);
    cout<<"Last occurance is : "<<iRet<<"\n";
    
    iRet = sobj.EvenCount();
    cout<<"Even count is : "<<iRet<<"\n";

    iRet = sobj.OddCount();
    cout<<"odd count is : "<<iRet<<"\n";

    iRet = sobj.SumAll();
    cout<<"Sum of all element is : "<<iRet<<"\n";

    return 0;


}
