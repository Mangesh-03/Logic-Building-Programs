import java.util.Scanner;
//////////////////////////////////////////////////////////////////////
// File name :       program3.java
// Discription :     It is a program to print  pattern.
// Author :          Mangesh Ashok Bedre
// Date :            25/11/2025
//
//////////////////////////////////////////////////////////////////////
class Pattern
{
    
    //////////////////////////////////////////////////////////////////////
    // Function Name :   Display
    // Discription :     It is used to print pattern.
    // Input  :          int ,int
    // Output :            * * * * * *
    //                     *       * *
    //                     *     *   *
    //                     *   *     *
    //                     * *       *
    //                     * * * * * *
    // Author :          Mangesh Ashok Bedre
    // Date :            25/11/2025
    //
    //////////////////////////////////////////////////////////////////////
    public void Display(int rows, int cols)
    {
        int i = 0;
        int j = 0;

        for(i = rows-1; i >= 0; i--)
        {
            for(j = 0; j < cols; j++)
            {
               if(i == j)
               {
                    System.out.print("*"+"\t");
               }
               else if((((i < j)) && (i != 0) && (j != cols-1))  || ((i>j) && (i != rows-1) && (j != 0)))
               {
                    System.out.print(" "+"\t");
               }
               else
               {
                    System.out.print("*"+"\t");
               }
               
            }
            System.out.println();
        }
    }
}

class program3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the rows : ");
        int rows = sobj.nextInt();

        System.out.println("Enter the cols : ");
        int cols = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(rows,cols);
    }
}