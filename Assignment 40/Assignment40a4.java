// Write a program which accept one number, two positions from user and check whether bit at first or bit at second is ON or OFF.

/*
  Input : 257
  iPos : 3 7
  Output : FALSE
*/

import java.util.*;

class Assignment40a4
{
    public static boolean CommonBits(int iNo, int iPos1,int iPos2)
    {
        int iPos = 1;
        int iResult = 0;

        System.out.println("Checking whether bits at positions " + iPos1 + " or " + iPos2 + " are ON or OFF : ");
        
        while(iNo != 0)
        {
            iResult = iNo % 2;

            if((iPos == iPos1) || (iPos == iPos2))
            {
                if(iResult == 1)
                {
                    return true;
                }
            }
            iNo = iNo / 2;
            iPos++;
        }
        return false;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iPos1 = 0, iPos2 = 0;
        boolean bRet = false;

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter postion 1 : ");
        iPos1 = sobj.nextInt();

        System.out.println("Enter position 2 : ");
        iPos2 = sobj.nextInt();

        bRet = CommonBits(iNo1,iPos1,iPos2);

        if(bRet == true)
        {
            System.out.println("Bits at positions are ON");
        }
        else
        {
            System.out.println("Bits at positions are OFF");
        }
    }
}