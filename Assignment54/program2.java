// Write java program which accept array from user and replace each
// member with summation of its digit.
// Input : 89 687 56 549 87 9
// Output : 17 21 11 18 15 9

import java.util.Scanner;

class MyArray
{
    public void SumArray(int Arr[])
    {
        int i = 0;
        int iDig = 0,iSum = 0,iNo = 0;

        for(i = 0; i < Arr.length; i++)
        {
            iNo = Arr[i];

            while(iNo != 0)
            {
                iDig = iNo % 10;
                iSum = iSum + iDig;
                iNo = iNo / 10;
            }

            Arr[i] = iSum;

            iSum = 0;
            iDig = 0;
        }
    }
}

class program2
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

        System.out.println("Element before  : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
        MyArray obj = new MyArray();
        obj.SumArray(Arr);

        System.out.println("Element after  : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }
}