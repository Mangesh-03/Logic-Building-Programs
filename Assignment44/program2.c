//////////////////////////////////////////////////////////////////////
// File name :       program2.c
// Discription :     It is program which accept matrix and one number 
//                   from user and return frequency of that number.
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   CountFrequency
// Discription :     It is used to return frequency of given numbers.
// Input  :          int,int, int** 
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

int CountFrequency(int rows, int cols,int **Arr,int iNo)
{
    int iFreq = 0;

    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(Arr[i][j] == iNo)
            {
                iFreq++;
            }
        }
    }
    return iFreq;
} 

int main()
{
    int rows = 0,cols = 0,i = 0,j = 0;
    int iRet = 0,iValue = 0;

    printf("Enter the rows : \n");
    scanf("%d",&rows);

    printf("Enter the cols : \n");
    scanf("%d",&cols);
    
    int **Arr = malloc(rows * sizeof(int *));
    
    for(i = 0; i < rows; i++)
    {
        Arr[i] = malloc(cols * sizeof(int));
    }
    printf("Enter elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &Arr[i][j]);
        }
    }
    printf("Elements are in Array : \n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter the number to find occurance of it : \n");
    scanf("%d",&iValue);

    iRet = CountFrequency(rows,cols,Arr,iValue);
    
    printf("Frequency of %d is :%d\n",iValue,iRet);
  
    for(i = 0; i < rows; i++)
    {
        free(Arr[i]);
    }
    free(Arr);
    return 0;
}