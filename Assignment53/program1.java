import java.util.Scanner;

class MyArray
{
    public int DiffArray(int Arr1[],int Arr2[])
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
        
        return (iSum1-iSum2);
    }
}

class program1
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
        int iRet = obj.DiffArray(Arr1,Arr2);

        System.out.println("Differnce between Summation of Arr1 and Arr2 : "+iRet);

    }
}