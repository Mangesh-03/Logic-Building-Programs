// Write Java program which accept array of characters from user and
// count vowels from it.

// Input : b N e B R b A i G i
// Output : 4

import java.util.Scanner;

class MyArray
{
    public int ArrayCountVowel(String str)
    {
        int iCount = 0,i = 0;

        for(i = 0; i < str.length(); i++)
        {
            if( str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' ||str.charAt(i) == 'o' ||
                str.charAt(i) == 'u' || str.charAt(i) == 'A' || str.charAt(i) == 'E' ||str.charAt(i) == 'I' ||
                str.charAt(i) == 'O' || str.charAt(i) == 'U'
              )
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        MyArray mobj = new MyArray();
        int iRet = mobj.ArrayCountVowel(str); 

        System.out.println("Number of vowels in String : " + iRet);
    }
}