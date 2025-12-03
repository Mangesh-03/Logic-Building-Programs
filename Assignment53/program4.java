import java.util.Scanner;

class MyArray
{
    public int[] CopyArr(int Arr[])
    {
        int i = 0;
        int result[] = new int [Arr.length];

        for(i = 0; i < Arr.length; i++)
        {
            result[i] = Arr[i];
        }
        return result;
    }
}

class program4
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

        MyArray obj = new MyArray();
        int iRet[] = obj.CopyArr(Arr);

        System.out.println("Elements from copyed array : ");
        for(int i = 0; i < iRet.length; i++)
        {
            System.out.print(iRet[i]+"\t");
        }
        System.out.println();

    }
}