import java.util.Scanner;

class MyArray
{
    public int[] Concate(int Arr1[],int Arr2[])
    {
        int iSize = Arr1.length + Arr2.length;
        int iResult[] = new int [iSize];
        int i = 0,j = 0;

        for(i = 0; i < Arr1.length; i++)
        {
            iResult[i] = Arr1[i];
        }

        for(j = 0; j < Arr2.length; i++,j++)
        {
            iResult[i] = Arr2[j];
        }

        return iResult;
    }
}

class program4
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
        int iRet[] = obj.Concate(Arr1,Arr2);

        System.out.println("Elements in iRet : ");
        for(int i = 0; i < iRet.length; i++)
        {
            System.out.print(iRet[i]+"\t");
        }
        System.out.println();
    }
}