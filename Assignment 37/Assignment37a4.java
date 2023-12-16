// Write a program which checks whether 7th & 8th & 9th bit is ON or OFF

/*
    Bit position 7 and 8 and 9

    0000    0000    0000    0000    0000    0001    1100    0000
    0       0       0       0       0       1        c      0
    
    0x000001c0
    
    Input : 448 Output : TRUE
    Input : 100 Output : FALSE
*/

import java.util.*;

class Assignment37a4
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0x000001c0;
        int iResult = 0;
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
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);
    
        if(bRet == true)
        {
            System.out.println("7th & 8th & 9th bits is ON");
        }
        else
        {
            System.out.println("Bits are OFF");
        }
    }
}