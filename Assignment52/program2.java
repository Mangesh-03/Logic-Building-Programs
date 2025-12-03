import java.util.Scanner;

class MyArray
{
    public void DisplayEven(int Arr1[],int Arr2[])
    {
        System.out.println("Even Elements from Arr1 are : ");
        for(int i = 0; i < Arr1.length; i++)
        {
            if((Arr1[i] % 2 ) == 0)
            {
                System.out.print(Arr1[i] + "\t");
            }
        }
        System.out.println();

        System.out.println("Even Elements from Arr2 are : ");
        for(int j = 0; j < Arr2.length; j++)
        {
            if((Arr2[j] % 2) == 0)
            {
                System.out.print(Arr2[j] + "\t");
            }
        }
        System.out.println();
    }
}

class program2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of first array :");
        int iSize1 = sobj.nextInt();

        System.out.println("Enter Size of second array :");
        int iSize2 = sobj.nextInt();

        int Arr1[] = new int [iSize1];
        int Arr2[] = new int [iSize2];

        System.out.println("Enter elements in Arr1 : ");
        for(int i = 0; i < iSize1; i++)
        {
            Arr1[i] = sobj.nextInt();
        }

        System.out.println("Enter elements in Arr2 : ");
        for(int i = 0; i < iSize2; i++)
        {
            Arr2[i] = sobj.nextInt();
        }

        MyArray obj = new MyArray();
        obj.DisplayEven(Arr1,Arr2);

    }
}