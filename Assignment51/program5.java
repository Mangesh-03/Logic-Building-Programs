//////////////////////////////////////////////////////////////////////
// File name :       program5.java
// Discription :     It is program which accept matrix and calculate 
//                   addition of border of matrix.
// Author :          Mangesh Ashok Bedre
// Date :            27/11/2025
//
//////////////////////////////////////////////////////////////////////

import java.util.Scanner;
import java.lang.Math;

class Matrix
{

    //////////////////////////////////////////////////////////////////////
    // Function Name :   AddOfBorder
    // Discription :     It is used to return addition of border of matrix.
    // Input  :          int[][] 
    // Output :          -
    // Author :          Mangesh Ashok Bedre
    // Date :            27/11/2025
    //
    //////////////////////////////////////////////////////////////////////  

    public int AddOfBorder(int Arr[][])
    {
        int rows = Arr.length;
        int cols = Arr[0].length;
        int iAdd = 0;

        for(int i = 0 ; i < rows ; i++)
        {
            for(int j = 0; j < cols; j++)
            {    
                if(i == 0 || j == 0 || i == rows-1 || j == cols-1)
                {
                    iAdd += Arr[i][j];
                }
                
            }
        }

        return iAdd;
    }
}

class program5
{
    public static void main(String a[])
    {

        int i = 0,j = 0;
        int iRet = 0;
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
        iRet = mobj.AddOfBorder(Arr);

        System.out.println("Addition of border : "+iRet);

    }
}