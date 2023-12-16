// Write a program which accept one number from user and check whether 9th or 12th bit is ON or OFF.

/*
  Input : 257
  Output : TRUE


   0000 0000 0000 0000 0000 1001 0000 0000
     0   0    0    0    0     9    0    0

  iMask :  0X00000900
*/

import java.util.*;

class Assignment40a3
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00000900;
        int iResult = 0;
        iResult = iNo & iMask;


        if(iResult != 0)
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
            System.out.println("9th or 12th bit is ON");
        }
        else
        {
            System.out.println("9th or 12th bit is OFF");
        }
    }
}