// Write Java program which accept array of characters from user and
// accept one character. Return occurrence of that character without
// considering case.
// Input : string : c B b u E B r b
//         char :  b
// Output : 4


import java.util.Scanner;

class MyArray
{
    public int Search(String str, char ch)
    {
        int iCount = 0,i = 0;

        ch = Character.toLowerCase(ch);
        str = str.toLowerCase();

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == ch)
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

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        System.out.println("Enter the charater : ");
        char ch = sobj.next().charAt(0);

        MyArray mobj = new MyArray();
        int iRet = mobj.Search(str,ch); 

        System.out.println("Occurance of "+ ch+" in String are : " + iRet);
    }
}