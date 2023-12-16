// Write a java program which accept number from user and return the count of odd digits.

/*
Input : 2395
Output : 3

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 0

*/

import java.util.*;

class Assignment34a2
{
    public static int CountOdd(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo%10;
            if((iDigit%2) != 0)
            {
                iCount++;
            }
            iNo = iNo/10;
        }
        return iCount;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = CountOdd(iValue);

        System.out.println("Total count of odd digits in the given number is : "+iRet);
        sobj.close();
    }
}