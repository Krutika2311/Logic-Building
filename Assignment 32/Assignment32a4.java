// Write a java program which accept string from user and check whether it contains vowels in it or not.

/*
   Input : marvellous
   Output : TRUE

   Input : Demo
   Output : TRUE

   Input : xyz
   Output : FALSE

 */

import java.util.*;

class Assignment32a4
{
    public static boolean ChkVowel(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u') || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'U'))
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        String str = null;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        bRet = ChkVowel(str);
        if(bRet == true)
        {
        System.out.println("The given string contains vowels");
        }
        else
        {
        System.out.println("The given string does not contain vowels");
        }
        sobj.close();
    }
}