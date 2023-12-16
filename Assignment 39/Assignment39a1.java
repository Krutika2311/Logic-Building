// Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TRUE otherwise return FALSE.

/*

iMask :  0000 0000 0000 0000 0000 0000 0000 0001

iPos : 2

iMask = iMask << (iPos-1);
iMask = iMask << 1;

iMask :  0000 0000 0000 0000 0000 0000 0000 0001

iMask :  0000 0000 0000 0000 0000 0000 000 0010

   Input : 10 2
   Output : TRUE
*/

import java.util.*;

class Program282
{
    public static boolean CheckBit(int iNo, int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;
        iMask = iMask << (iPos - 1);

        iResult = iNo & iMask;
        
        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;

        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position : ");
        iPos = sobj.nextInt();

        bRet = CheckBit(iNo,iPos);

        if(bRet == true)
        {
            System.out.println("Bit is ON at given position.");
        }
        else
        {
            System.out.println("Bit is OFF at given position.");

        }
    }
}