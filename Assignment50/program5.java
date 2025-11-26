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
    // Output :          1 2 3 4 5
    //                   1 2     5
    //                   1   3   5
    //                   1     4 5
    //                   1 2 3 4 5   
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
               if(i == j)
               {
                    System.out.print((j+1)+"\t");
               }
               else if((((i > j)) && ((i == cols-1) || (j == 0))))
               {
                    System.out.print((j+1)+"\t");
               }
               else if(((i<j) && ((i == 0) || (j == rows-1))))
               {
                    System.out.print((j+1) +"\t");    
               }
               else
               {
                    System.out.print("\t");
               }
               
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