// Write a program whic hchecks whether first and last bit is ON or OFF. First bit means bit number 1 and last bit means bit number 32.

/*
    Bit position 1 and 32

    1000    0000    0000    0000    0000    0000    0000    0001
    8       0       0       0       0       0        0      1
    
    0x80000001
*/

import java.util.*;

class Assignment37a5
{
    public static boolean CheckBit(long iNo)
    {
        int iMask = 0x80000001;
        long iResult = 0;
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
        long iNo = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextLong();

        bRet = CheckBit(iNo);
    
        if(bRet == true)
        {
            System.out.println("First and Last bit is ON");
        }
        else
        {
            System.out.println("Bits are OFF");
        }
    }
}