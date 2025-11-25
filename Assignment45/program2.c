//////////////////////////////////////////////////////////////////////
// File name :       program2.c
// Discription :     It is program which accept matrix and reverse the 
//                   row elements.                   
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   ReverseRow
// Discription :     It is used to reverse row from given matrix.
// Input  :          int,int, int** 
// Output :          -
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

void ReverseRow(int rows, int cols,int **Arr)
{
    int temp = 0;
    for(int i = 0 ; i < rows  ; i++)
    {
        for(int j = 0; j < cols/2; j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[i][cols-j-1];
            Arr[i][cols-j-1] = temp;
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


    ReverseRow(rows,cols,Arr);

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