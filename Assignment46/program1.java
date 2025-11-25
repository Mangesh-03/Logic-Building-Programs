import java.util.Scanner;
//////////////////////////////////////////////////////////////////////
// File name :       program1.java
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
    //                   A B C D
    //                   A B C D
    //                   A B C D
    // Author :          Mangesh Ashok Bedre
    // Date :            25/11/2025
    //
    //////////////////////////////////////////////////////////////////////
    public void Display(int rows, int cols)
    {
        int i = 0;
        int j = 0;
        char ch = '\0';

        for(i = 0; i < rows; i++)
        {
            for(j = 0,ch = 'A'; j < cols; j++,ch++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
        }
    }
}

class program1
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