import java.util.Scanner;

class MyArray
{
    public boolean ChkPallindrome(int Arr[])
    {
        int i = 0;
        int iDig = 0,iRev = 0,iNo = 0;
        boolean bFlag = true;

        for(i = 0; i < Arr.length; i++)
        {
            iNo = Arr[i];

            while(iNo != 0)
            {
                iDig = iNo % 10;
                iRev = iRev * 10 + iDig;
                iNo = iNo / 10;
            }

            if(Arr[i] != iRev)
            {
                bFlag = false;
                break;
            }
            iRev = 0;
            iDig = 0;
        }
        return bFlag;
    }
}

class program5
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
        boolean bRet = obj.ChkPallindrome(Arr);

        if(bRet == true)
        {
            System.out.println("All elements are pallindrome");
        }
        else
        {
            System.out.println("All elements are not pallindrome");
        }
    }
}