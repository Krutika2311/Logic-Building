// Write a prpgram which accept 2 strings from user and check whether first N contents of two strings are equal or not.
// Note : If third parameter is greater than the size of second string then concat whole string after first string.

/*
Input : Marvellous Infosystems
        Marvellous Logic Building
        10
Output : TRUE     
*/

import java.util.*;

class Assignment36a3
{
    public static boolean StrNCmpX(String src, String dest, int iCnt)
    {
        int iCount = 0;

        if(iCnt > dest.length())
        {
            return false;
        }

        for(iCount = 0; iCount < iCnt; iCount++)
        {
            if(src.charAt(iCount) != dest.charAt(iCount))
            {
                return false;
            }
        }
        return true;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str1 = null;
        String str2 = null;
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter first string : ");
        str1 = sobj.nextLine();

        System.out.println("Enter second string : ");
        str2 = sobj.nextLine();
        
        System.out.println("Enter number of characters you want  to compare from statring position : ");
        iNo = sobj.nextInt();   

        bRet = StrNCmpX(str1, str2, iNo);

        if(bRet == true)
        {                   
            System.out.println("The first " + iNo + " characters of the two strings are equal");
        }
        else
        {
            System.out.println("The first " + iNo + " characters of the two strings are not equal");

        }
        
        sobj.close();
    }
}