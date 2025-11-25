import java.util.Scanner;
//////////////////////////////////////////////////////////////////////
// File name :       program4.java
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
    // Output :          * # * #
    //                   * # * #
    //                   * # * #
    //                   * # * #
    // Author :          Mangesh Ashok Bedre
    // Date :            25/11/2025
    //
    //////////////////////////////////////////////////////////////////////
    public void Display(int rows, int cols)
    {
        int i = 0;
        int j = 0;

        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < cols; j++)
            {
                if((j % 2 ) == 0)
                {
                    System.out.print("*"+"\t");
                }
                else
                {
                    System.out.print("#"+"\t");
                }
            }
            System.out.println();
        }
    }
}

class program4
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