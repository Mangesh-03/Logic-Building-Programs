// Write Java program which accept array of characters from user and
// return difference between frequency of capital and frequency of small
// characters.
// Input : N e B R b A I O G i b
// Output : 3 (7 - 4)

import java.util.Scanner;

class MyArray
{
    public int Differnce(char Arr[])
    {
        int iCount1 = 0,i = 0,iCount2 = 0;

        for(i = 0; i < Arr.length ; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                iCount1++;
            }
            else
            {
                iCount2++;
            }
        }

        
        return (iCount1 - iCount2);
    }
}

class program4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        MyArray mobj = new MyArray();
        int iRet = mobj.Differnce(Arr); 

        System.out.println("Differnce in Capital and small character are : " + iRet);
    }
}