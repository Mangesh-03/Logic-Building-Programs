// Write java program which accept array from user and reverse each
// number of that array.

// Input :  89687 56549 879
// Output : 98786 65945 789

import java.util.Scanner;

class MyArray
{
    public void RevArray(int Arr[])
    {
        int i = 0;
        int iDig = 0,iRev = 0,iNo = 0;

        for(i = 0; i < Arr.length; i++)
        {
            iNo = Arr[i];

            while(iNo != 0)
            {
                iDig = iNo % 10;
                iRev = iRev * 10 + iDig;
                iNo = iNo / 10;
            }

            Arr[i] = iRev;

            iRev = 0;
            iDig = 0;
        }
    }
}

class program1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of array :");
        int iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter elements in Arr : ");
        for(int i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Element before reversed : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
        MyArray obj = new MyArray();
        obj.RevArray(Arr);

        System.out.println("Element after reversed : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }
}