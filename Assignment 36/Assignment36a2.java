// Write a program which accepts 2 strings from user and check whether contents of two strings are equal or not.

/*
Input : Marvellous Infosystems
        Marvellous Infosystems
Output : TRUE
*/

import java.util.*;

class Assignment36a2
{
    public static boolean StrCmpX(String src, String dest)
    {
        int iCnt = 0;
        if(src.length() != dest.length())
        {
            return false;
        }

        for(iCnt = 0; iCnt < src.length(); iCnt++)
        {
            if(src.charAt(iCnt) != dest.charAt(iCnt))
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
        boolean bRet = false;

        System.out.println("Enter first string : ");
        str1 = sobj.nextLine();

        System.out.println("Enter second string : ");
        str2 = sobj.nextLine();
        
        bRet = StrCmpX(str1, str2);

        if(bRet == true)
        {                   
            System.out.println("The contents of two string are equal");
        }
        else
        {
            System.out.println("The contents of two string are not equal");

        }
        
        sobj.close();
    }
}