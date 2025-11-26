
import java.util.Scanner;
//////////////////////////////////////////////////////////////////////
// File name :       program2.c
// Discription :     It is a program to print  pattern.
// Author :          Mangesh Ashok Bedre
// Date :            26/11/2025
//
//////////////////////////////////////////////////////////////////////
class Pattern   

{
    
    //////////////////////////////////////////////////////////////////////
    // Function Name :   Display
    // Discription :     It is used to print pattern.
    // Input  :          String
    // Output :          H e l l o
    //                   H e l l *
    //                   H e l * *
    //                   H e * * * 
    //                   H * * * *
    // Author :          Mangesh Ashok Bedre
    // Date :            26/11/2025
    //
    //////////////////////////////////////////////////////////////////////
    public void Display(String str)
    {
        int i = 0;
        int j = 0;

        for(i = str.length() - 1; i > 0 ; i--)
        {
            for(j = 0; j < str.length(); j++)
            {
                if(i < j)
                {
                    System.out.print("*"+"\t");
                }
                else
                {
                    System.out.print(str.charAt(j)+"\t");
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

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Display(str);
    }
}
