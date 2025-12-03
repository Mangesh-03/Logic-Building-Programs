import java.util.Scanner;

class MyArray
{
    public int MinArray(int Arr1[],int Arr2[])
    {
        int iSum1 = 0;
        for(int i = 0; i < Arr1.length; i++)
        {
            iSum1 += Arr1[i];
        }
        
        int iSum2 = 0;

        for(int j = 0; j < Arr2.length; j++)
        {
            iSum2 += Arr2[j];
        }
        
        if(iSum1 < iSum2)
        {
            return iSum1;
        }
        else
        {
            return iSum2;
        }
    }
}

class program3
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
        int iRet = obj.MinArray(Arr1,Arr2);

        System.out.println("Minimum Sum between Summation of Arr1 and Arr2 : "+iRet);

    }
}