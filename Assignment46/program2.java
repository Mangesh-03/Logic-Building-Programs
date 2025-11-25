import java.util.Scanner;
//////////////////////////////////////////////////////////////////////
// File name :       program2.java
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
        char ch1 = '\0',ch2 = '\0';

        for(i = 0; i < rows; i++)
        {
            for(j = 0,ch1 = 'A',ch2 = 'a'; j < cols; j++,ch1++,ch2++)
            {
                if((i % 2) != 0)
                {
                    System.out.print(ch2+"\t");
                }
                else
                {
                    System.out.print(ch1+"\t");
                }
            }
            System.out.println();
        }
    }
}

class program2
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