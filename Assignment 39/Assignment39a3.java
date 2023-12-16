// Write a program which accept one number and position from user and on that bit. Return modified number.

/*
   Input : 10 3
   Output : 14

   Input :  1 0 1 0
   Mask  :  1 0 0 0     |
   __________________
   Result : 1 1 1 0

*/

import java.util.*;

class Assignment39a3
{
    public static int OnBit(int iNo, int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;
        iMask = iMask << (iPos - 1);

        iResult = iNo | iMask;

        return iResult;
    
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position : ");
        iPos = sobj.nextInt();

        iRet = OnBit(iNo,iPos);

        System.out.println("Modified number is : "+iRet);
    }
}