// Write a java program which accept number from user and return the difference between summation of even digits and summation of odd digits.

/*
Input : 2395
Output : 15  (2 - 17)

Input : 1018
Output : 6  (8 - 2)

Input : -1018
Output : 16  (16 - 0)

Input : 8462
Output : -18  (0 - 18)

*/

import java.util.*;

class Assignment34a5
{
    public static int CountDiff(int iNo)
    {
        int iDigit = 0, iSumEven = 0, iSumOdd = 0, iAns = 0;;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo%10;
            if((iDigit%2) == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }

            iNo = iNo/10;
        }
        iAns = iSumEven - iSumOdd;
        return iAns;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = CountDiff(iValue);

        System.out.println("Difference of summation of even and odd digits of given number is : "+iRet);
        sobj.close();
    }
}