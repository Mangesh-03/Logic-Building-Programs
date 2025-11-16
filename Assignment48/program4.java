import java.util.Scanner;
//////////////////////////////////////////////////////////////////////
// File name :       program4.c
// Discription :     It is a program to print  pattern.
// Author :          Mangesh Ashok Bedre
// Date :            1/09/2025
//
//////////////////////////////////////////////////////////////////////
class Pattern
{
    
    //////////////////////////////////////////////////////////////////////
    // Function Name :   Display
    // Discription :     It is used to print pattern.
    // Input  :          String
    // Output :          H e l l o
    //                   H e l l
    //                   H e l
    //                   H e
    //                   H
    //                   H e
    //                   H e l
    //                   H e l l
    //                   H e l l o
    // Author :          Mangesh Ashok Bedre
    // Date :            1/09/2025
    //
    //////////////////////////////////////////////////////////////////////
    public void Display(String str)
    {
        int i = 0;
        int j = 0;

        for(i = 0; i < str.length() ; i++)
        {
            for(j = 0; j < str.length()-i ; j++)
            {
                
                System.out.print(str.charAt(j)+"\t");
                
            }
            System.out.println();
        }
        for(i = 1; i < str.length() ; i++)
        {
            for(j = 0; j < str.length() ; j++)
            {
                if(j <= i)
                {
                    System.out.print(str.charAt(j)+"\t");
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

class program4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Display(str);
    }
}