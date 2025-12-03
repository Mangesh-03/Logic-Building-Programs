import java.util.Scanner;

class MyArray
{
    public int[] CopyArrRev(int Arr[])
    {
        int i = 0,j = 0;
        int result[] = new int [Arr.length];

        for(i = Arr.length - 1,j = 0; i >= 0; i--,j++)
        {
            result[j] = Arr[i];
        }
        return result;
    }
}

class program2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of first array :");
        int iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter elements in Arr : ");
        for(int i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        MyArray obj = new MyArray();
        int iRet[] = obj.CopyArrRev(Arr);

        for(int i = 0; i < iRet.length; i++)
        {
            System.out.print(iRet[i]+"\t");
        }
        System.out.println();

    }
}