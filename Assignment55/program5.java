// Write Java program which accept array from user and display below
// pattern.
// Input :  8 9 7 6 4 2 4
// Output :
//        * * * * * * * *
//        * * * * * * * * *
//        * * * * * * *
//        * * * * * *
//        * * * *
//        * * 
//        * * * * 

import java.util.Scanner;

class MyArray
{
    void pattern(int Arr[])
    {
        for(int i = 0 ; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i]; j++)
            {
                System.out.print("*\t");
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

        System.out.println("Enter size of Array : ");
        int size = sobj.nextInt();

        int Arr[] = new int[size];

        System.out.println("Enter elements : ");
        for(int i = 0 ; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.pattern(Arr);
    }
}