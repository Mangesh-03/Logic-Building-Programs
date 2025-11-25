//////////////////////////////////////////////////////////////////////
// File name :       program1.c
// Discription :     It is program which accept matrix from user and 
//                   return addition of diagonal elements.
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   AddDiagonal
// Discription :     It is used to return addition of diagonal elements.
// Input  :          int,int, int[][] 
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            17/11/2025
//
//////////////////////////////////////////////////////////////////////

int AddDiagonal(int rows, int cols,int Arr[rows][cols])
{
    if(rows != cols)
    {
        printf("As no square matrix so no daigonal\n");
        return -1;
    }
    int iSum = 0;

    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == j)
            {
                iSum += Arr[i][j];
            }
        }
    }
    return iSum;
} 

int main()
{
    int rows = 0,cols = 0,i = 0,j = 0;
    int iRet = 0;

    printf("Enter the rows : \n");
    scanf("%d",&rows);

    printf("Enter the cols : \n");
    scanf("%d",&cols);
    
    int Arr[rows][cols];

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
            printf("%d\t",
                Arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    iRet = AddDiagonal(rows,cols,Arr);
    if(iRet == -1)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Addition of diagonal :%d\n",iRet);
    }
      
    return 0;
}