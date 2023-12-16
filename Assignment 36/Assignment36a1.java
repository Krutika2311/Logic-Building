// Write a java program which accepts 2 strings from user and cancat N characters of second string after first string. Value of N should be accepted from user.
// Note : If third parameter is greater than the size of second string then concat whole string after first string.

/*
Input : Marvellous Infosystems
        Logic Building
        5
Output : Marvellous Infosystems Logic           
*/

import java.util.*;

class Assignment36a1
{
    public static String StrNCatX(String src, String dest, int iCnt)
    {
        int iCount = 0, i = 0; 
        char Arr[] = src.toCharArray();
        char Brr[] = dest.toCharArray();
        char Str[] = new char[Arr.length + Brr.length];

        if(iCnt > Brr.length)
        {
            iCnt = Brr.length;
        }
        for(iCount = 0; iCount < iCnt; iCount++)
        {
            Str[i] = Brr[iCount];
            i++;
        }
        String str = new String(Str);
        return(src + " " +str);
    }

    public static void main(String Arg[])
    {
        // created scanner obj
        Scanner sobj = new Scanner(System.in);

        String str1 = null;
        String str2 = null;
        int iNo = 0;

        System.out.println("Enter first string : ");
        str1 = sobj.nextLine();

        System.out.println("Enter second string : ");
        str2 = sobj.nextLine();

        System.out.println("Enter number of characters from second string you want to concat after first string : ");
        iNo = sobj.nextInt();
        
        String iRet = StrNCatX(str1, str2, iNo);

        System.out.println("String after concatenation is : " + iRet);
        sobj.close();
    }
}