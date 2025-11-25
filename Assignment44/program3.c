//////////////////////////////////////////////////////////////////////
// File name :       program3.c
// Discription :     It is program which accept matrix and return 
//                   largest number from both the diagonals.
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   MaxDiagonal
// Discription :     It is used to return largest number from both the diagonals.
// Input  :          int,int, int** 
// Output :          int
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

int MaxDiagonal(int rows, int cols,int **Arr)
{
    int iMax = Arr[0][0];

    
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == j)
            {
                if(iMax < Arr[i][j])
                {
                    iMax = Arr[i][j];
                }
            }
            else if(i+j == cols -1)
            {
                if(iMax < Arr[i][j])
                {
                    iMax = Arr[i][j];
                }
            }
        }
    }


    return iMax;
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


    iRet = MaxDiagonal(rows,cols,Arr);
    
    printf("Maximum number from both diagonal is :%d\n",iRet);
  
    for(i = 0; i < rows; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0;
}