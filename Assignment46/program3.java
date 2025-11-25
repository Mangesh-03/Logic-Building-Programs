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
    // Output :          A B C D
    //                   a b c d
    //                   A B C D
    //                   a b c d
    // Author :          Mangesh Ashok Bedre
    // Date :            25/11/2025
    //
    //////////////////////////////////////////////////////////////////////
    public void Display(int rows, int cols)
    {
        int i = 0;
        int j = 0;
        char ch = '\0';

        for(i = 0,ch = 'A'; i < rows; i++,ch++)
        {
            for(j = 0; j < cols; j++)
            {
                System.out.print(ch+"\t");
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