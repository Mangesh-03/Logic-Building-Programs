
//////////////////////////////////////////////////////////////////////
// File name :       program5.c
// Discription :     It is program which accept matrix and check whether the matrix is
//                   sparse matrix or not.                  
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   chkSparseMatrix
// Discription :     It is used to check whether the matrix is
//                   sparse matrix or not. 
// Input  :          int,int, int** 
// Output :          bool
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

bool chkSparseMatrix(int rows, int cols,int **Arr)
{
    int iCount1 = 0,iCount2 = 0;
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(Arr[i][j] == 0)
            {
                iCount1++;
            }
            else
            {
               iCount2++;
            }
        }
    }
    return (iCount1 > iCount2);
} 

int main()
{
    int rows = 0,cols = 0,i = 0,j = 0;
    int iRet = 0,iValue = 0;
    bool bRet = false;

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


    bRet = chkSparseMatrix(rows,cols,Arr);

    if(bRet == true)
    {
        printf("Sparse matrix\n");
    }
    else 
    {
        printf("not sparse matrix\n");
    }
    
  
    for(i = 0; i < rows; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0;
}