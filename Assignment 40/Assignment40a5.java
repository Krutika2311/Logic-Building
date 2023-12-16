// Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.

/*
   Input : 897 9 13
   Toggle all bits from position 9 to 13 of input number i.e 897
   Output : 7297
*/

import java.util.*;

class Assignment40a5
{
    public static int ToggleBitRange(int iNo, int iStart, int iEnd)
    {
        int iMask = 0;
        int iCnt = 0;

        if((iStart < 1) || (iEnd > 32) || (iStart > iEnd))
        {
            System.out.println("Invalid range of positions");
            return iNo;
        }

        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iMask = 1 << (iCnt - 1);
            iNo = iNo ^ iMask;
        }
        return iNo;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iStart = 0, iEnd = 0, iRet = 0;

        System.out.println("Enter first number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter start position to toggle bits : ");
        iStart = sobj.nextInt();

        System.out.println("Enter end position to toggle bits : ");
        iEnd = sobj.nextInt();

        iRet = ToggleBitRange(iNo, iStart, iEnd);
        
        System.out.println("Number after toggling bits in the range [" + iStart + " to " + iEnd + "] is : " + iRet);
    }
}