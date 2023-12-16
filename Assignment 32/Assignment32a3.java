// Write a java program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

/*
   Input : MarvellouS
   Output : 6 (8-2)   
*/


import java.util.*;

class Assignment32a3
{
    public static int CountDiff(String str)
    {
        int iCnt = 0;
        int iCountC = 0;
         int iCountS = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCountS++;
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCountC++;
            }
        }
        return iCountS-iCountC;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        String str = null;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        iRet = CountDiff(str);
        System.out.println("Difference between frequency of small characters &  capital characters in given string is : "+iRet);

        sobj.close();
    }
}