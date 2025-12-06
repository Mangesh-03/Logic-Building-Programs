// Write Java program which accept array of characters from user and
// replace each capital character with its corresponding small character.
// Input :  b N j B R b A d G G
// Output : b n j b r b a d g g

import java.util.Scanner;

class MyArray
{
    public String ArrayReplace(String str)
    {
        int iCnt = 0;

        StringBuilder strb = new StringBuilder(str);

        for(iCnt = 0; iCnt < strb.length(); iCnt++)
        {
            if((strb.charAt(iCnt) >= 'A') && strb.charAt(iCnt) <= 'Z')
            {
                strb.setCharAt(iCnt,(char)(strb.charAt(iCnt)+ 32));
            }
        }

        return strb.toString();       
        
    } 
}   

class program1
{
    public static void main(String a[])
    {     
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        System.out.println("before String : "+str);
        MyArray mobj = new MyArray();

        String ret = mobj.ArrayReplace(str);

        System.out.println("after String : "+ret);
    }
}