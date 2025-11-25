//////////////////////////////////////////////////////////////////////
// File name :       program3.c
// Discription :     It is program which accept matrix and col the 
//                   row elements.                   
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   ReverseCol
// Discription :     It is used to reverse col from given matrix.
// Input  :          int,int, int** 
// Output :          -
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

void ReverseCol(int rows, int cols,int **Arr)
{
    int temp = 0;
    for(int i = 0 ; i < rows  ; i++)
    {
        for(int j = 0; j < cols/2; j++)
        {
            temp = Arr[j][i];
            Arr[j][i] = Arr[cols-j-1][i];
            Arr[cols-j-1][i] = temp;
        }
    }

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


    ReverseCol(rows,cols,Arr);

    printf("Elements after Transpose in Array : \n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }
  
    for(i = 0; i < rows; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0;
}