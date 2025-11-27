//////////////////////////////////////////////////////////////////////
// File name :       program1.java
// Discription :     It is program which accept matrix and 
//                   swap the contents of consecutive rows.
// Author :          Mangesh Ashok Bedre
// Date :            27/11/2025
//
//////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Matrix
{

    //////////////////////////////////////////////////////////////////////
    // Function Name :   SwapRows
    // Discription :     It is used to swap the contents of consecutive rows.
    // Input  :          int[][] 
    // Output :          -
    // Author :          Mangesh Ashok Bedre
    // Date :            27/11/2025
    //
    //////////////////////////////////////////////////////////////////////  

    public void SwapRows(int Arr[][])
    {
        int rows = Arr.length;
        int cols = Arr[0].length;

        int temp = 0;
        for(int i = 0 ; i < rows -1 ; i += 2)
        {
            for(int j = 0; j < cols; j++)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i+1][j];
                Arr[i+1][j] = temp;
            }
        }
    }
}

class program1
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
        mobj.SwapRows(Arr);

        System.out.println("After consecutive rows swap : ");
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