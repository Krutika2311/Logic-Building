// Write a program which checks whether 15th bit is ON or OFF

/*
   iMask = 16384;

   0000 0000 0000 0000 0100 0000 0000 0000
     0   0    0    0    4     0    0    0

     0X00004000

     Input : 49152 Output : TRUE
     Input : 32768 Output : FALSE
*/

import java.util.*;

class Assignment37a1
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00004000;  // 15bit = 2^14 = 16384
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
            System.out.println("15th bit is ON");
        }
        else
        {
            System.out.println("15th bit is OFF");
        }
    }
}