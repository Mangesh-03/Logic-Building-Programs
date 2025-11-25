
import java.util.Scanner;
//////////////////////////////////////////////////////////////////////
// File name :       program5.java
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
    // Output :          1 2 3 4
    //                   5 6 7 8
    //                   9 10 11 12
    // Author :          Mangesh Ashok Bedre
    // Date :            25/11/2025
    //
    //////////////////////////////////////////////////////////////////////
    public void Display(int rows, int cols)
    {
        int i = 0;
        int j = 0,iNo  = 0;

        for(i = rows,iNo = 1 ; i >= 1; i--)
        {
            for(j = 0; j < cols; j++,iNo++)
            {
                System.out.print(iNo+"\t");
            }
            System.out.println();
        }
    }
}

class program5
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