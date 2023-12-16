// Write a Java program which accept string from user and count number of capital characters

/*
   Input : Marvellous Multi OS
   Output : 4
*/

import java.util.*;

class Assignment32a1
{
    public static int CountCapital(String str)
    {
        int iCnt = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        String str = null;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        iRet = CountCapital(str);
        System.out.println("Total count of capital characters in given string is : "+iRet);

        sobj.close();
    }
}