// Write java program which accept array of characters from user and
// count number of capital characters.
// Input : b N j B R b A d G G
// Output : 6

import java.util.Scanner;

class MyArray
{
    public int CapArray(char Arr[])
    {
        int i = 0,iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') &&(Arr[i] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of array :");
        int iSize = sobj.nextInt();

        char Arr[] = new char [iSize];

        System.out.println("Enter elements in Arr : ");
        for(int i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.next().charAt(0);
        }

        MyArray obj = new MyArray();
        int iRet = obj.CapArray(Arr);

        System.out.println("Number of capital alphabet : "+iRet);        
    }
}