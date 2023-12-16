// Write a program which accept one number and position from user and off that bit. Return modified number.

/*
  Input : 10 2
  Output : 8
*/

import java.util.*;

class Assignment39a2
{
    public static int OffBit(int iNo, int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;
        iMask = iMask << (iPos - 1);

        iResult = iNo & iMask;
        
        if(iResult == iMask)
        {
            return (iNo ^ iMask);
        }
        else
        {
            return iNo;

        }
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

        iRet = OffBit(iNo,iPos);

        System.out.println("Modified number is : "+iRet);
    }
}