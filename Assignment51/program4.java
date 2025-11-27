//////////////////////////////////////////////////////////////////////
// File name :       program4.java
// Discription :     It is program which accept matrix and calculate 
//                   trace and normal of matrix.
// Author :          Mangesh Ashok Bedre
// Date :            27/11/2025
//
//////////////////////////////////////////////////////////////////////

import java.util.Scanner;
import java.lang.Math;

class Matrix
{

    //////////////////////////////////////////////////////////////////////
    // Function Name :   CalTraceAndNormal
    // Discription :     It is used to calculate trace and normal of matrix.
    // Input  :          int[][] 
    // Output :          -
    // Author :          Mangesh Ashok Bedre
    // Date :            27/11/2025
    //
    //////////////////////////////////////////////////////////////////////  

    public float[] CalTraceAndNormal(int Arr[][])
    {
        int rows = Arr.length;
        int cols = Arr[0].length;
        float Result[] = new float[2];
        int iTrace = 0,iNormal = 0;

        for(int i = 0 ; i < rows ; i++)
        {
            for(int j = 0; j < cols; j++)
            {    
                if(i == j)
                {
                    iTrace = iTrace + Arr[i][j];
                }
                iNormal += Arr[i][j];
            }
        }
        Result[1] = (float)Math.sqrt(iNormal);
        Result[0] = iTrace;

        return Result;
    }
}

class program4
{
    public static void main(String a[])
    {

        int i = 0,j = 0;
        float fRet[];
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
        fRet = mobj.CalTraceAndNormal(Arr);

        System.out.println("Trace of matrix : "+fRet[0]);
        System.out.println("Normal of matrix : "+fRet[1]);

    }
}