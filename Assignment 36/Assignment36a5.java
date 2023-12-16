// Accept string from user and check whether the string is palindrome or not without considering its case

/*
   Input : 1abccBA1
   Output : TRUE 
*/

import java.util.*;

class Assignment36a5
{
    public static boolean StrPalindrome(String str)
    {
        char Arr[] = str.toCharArray();
        int iStart = 0;
        int iEnd = Arr.length - 1;

        while(iStart < iEnd)
        {
            if(Arr[iStart] != Arr[iEnd])
            {
                if(Arr[iStart] >= 'a' && Arr[iStart] <= 'z')
                {
                    if(Arr[iStart] != (char)(Arr[iEnd]+32))
                    {
                        return false;
                    }
                }
                else if(Arr[iStart] >= 'A' && Arr[iStart] <= 'Z')
                {
                    if(Arr[iStart] != (char)(Arr[iEnd]-32))
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
            iStart++;
            iEnd--;
        }   
        return true;     
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;
        boolean bRet = false;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        bRet = StrPalindrome(str);

        if(bRet == true)
        {
            System.out.println("The given string is palindrome");
        }
        else
        {
            System.out.println("The given string is not palindrome");
        }

        sobj.close();
    }
}