// Write a Java program which accept string from user and count number of small characters

/*
   Input : Marvellous
   Output : 9
*/

import java.util.*;

class Assignment32a2
{
    public static int CountSmall(String str)
    {
        int iCnt = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
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

        iRet = CountSmall(str);
        System.out.println("Total count of smalll characters in given string is : "+iRet);

        sobj.close();
    }
}