import java.util.Scanner;

class MyArray
{
    public void SumArray(int Arr1[],int Arr2[])
    {
        int iSum = 0;
        for(int i = 0; i < Arr1.length; i++)
        {
            iSum += Arr1[i];
        }
        System.out.println("Summation of elements of Arr1 is : "+iSum);

        iSum = 0;

        for(int j = 0; j < Arr2.length; j++)
        {
            iSum += Arr2[j];
        }
        
        System.out.println("Summation of elements of Arr1 is : "+iSum);

    }
}

class program5
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
        obj.SumArray(Arr1,Arr2);

    }
}