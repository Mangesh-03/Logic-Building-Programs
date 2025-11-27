//////////////////////////////////////////////////////////////////////
// File name :       program3.java
// Discription :     It is program which accept matrix and 
//                   Transpose the Matrix.
// Author :          Mangesh Ashok Bedre
// Date :            27/11/2025
//
//////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Matrix
{

    //////////////////////////////////////////////////////////////////////
    // Function Name :   TransposeMatrix
    // Discription :     It is used to Transpose the Matrix.
    // Input  :          int[][] 
    // Output :          -
    // Author :          Mangesh Ashok Bedre
    // Date :            27/11/2025
    //
    //////////////////////////////////////////////////////////////////////  

    public void TransposeMatrix(int Arr[][])
    {
        int rows = Arr.length;
        int cols = Arr[0].length;

        int temp = 0;
        for(int i = 0 ; i < rows ; i++)
        {
            for(int j = i+1; j < cols; j++)
            {    
                temp = Arr[i][j];
                Arr[i][j] = Arr[j][i];
                Arr[j][i] = temp;
            }
        }
    }
}

class program3
{
    public static void main(String a[])
    {

        int i = 0,j = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the rows : ");
        int rows = sobj.nextInt();

        System.out.println("Enter the cols : ");
        int cols = sobj.nextInt();

        int Arr[][] = new int [rows][cols];

        System.out.println("Enter the elements : ");
        for(i = 0; i < rows; i++) 
        {
            for(j = 0; j < cols; j++) 
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        System.out.println("Elements are : ");
        for(i = 0; i < rows; i++) 
        {
            for(j = 0; j < cols; j++) 
            {
               System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
        

        Matrix mobj = new Matrix();
        mobj.TransposeMatrix(Arr);

        System.out.println("After Transpose the Matrix : ");
        for(i = 0; i < rows; i++) 
        {
            for(j = 0; j < cols; j++) 
            {
               System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}