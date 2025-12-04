// Write java program which accept marks of N students from user
// and display class of each student.

// Less than 35 -Fail
// Less than 50 -Pass class
// Less than 60 -Second class
// Less than 70 -First class
// Greater than 70 - First class with Distinction

// Input :  67.3  45.8  88.9  77.5  55.2
// Output : 67.3   First class
//          45.8   Pass class
//          88.9   First class with Distinction
//          77.5   First class with Distinction
//          55.2   Second class

import java.util.Scanner;

class MyArray
{
    public void Percentage(int Arr[])
    {
        int i = 0,iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] < 35)
            {
                System.out.println("Fail");
            }
            else if((Arr[i] >= 35) &&(Arr[i] < 50))
            {
                System.out.println("Pass class");
            }
            else if((Arr[i] >= 50) &&(Arr[i] < 60))
            {
                System.out.println("Second class");
            }
            else if((Arr[i] >= 60) &&(Arr[i] < 70))
            {
                System.out.println("First class");
            }
            else if((Arr[i] >= 70))
            {
                System.out.println("First class with Distinction");
            }

        }
        
    }
}

class program4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of student :");
        int iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter Marks in Arr : ");
        for(int i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        MyArray obj = new MyArray();
        obj.Percentage(Arr);
       
    }
}



