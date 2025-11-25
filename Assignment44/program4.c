//////////////////////////////////////////////////////////////////////
// File name :       program4.c
// Discription :     It is program which accept matrix and print 
//                   Addition of each columns.
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
// Function Name :   AddColumn
// Discription :     It is used to print Addition of each columns.
// Input  :          int,int, int** 
// Output :          -
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////

void AddColumn(int rows, int cols,int **Arr)
{
    int iAdd = 0;

    
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            iAdd = iAdd + Arr[j][i];
        }
        printf("Addition of %d col : %d\n",(i+1),iAdd);
        iAdd = 0;
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


    AddColumn(rows,cols,Arr);
  
    for(i = 0; i < rows; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0;
}