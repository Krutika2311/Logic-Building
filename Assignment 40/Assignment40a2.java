// Write a program which accept two numbers from user and display position of common ON bits from that two numbers

/*
Input : 10 15   (1010   1111)
Output : 2 4
*/


import java.util.*;

class Assignment40a2
{
    public static void CommonBits(int iNo1, int iNo2)
    {
        int iPos = 1;
        int iRet1 = 0, iRet2 = 0;

        System.out.println("Common ON (1) Bits of given numbers are at positions : ");
        
        while((iNo1 != 0) && (iNo2 != 0))
        {
            iRet1 = iNo1 % 2;
            iRet2 = iNo2 % 2;

            if((iRet1 == 1) && (iRet2 == 1))
            {
                System.out.print(iPos + "\t");
            }
            iNo1 = iNo1 / 2;
            iNo2 = iNo2 / 2;
            iPos++;
        }
        System.out.println();

    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iNo2 = 0;

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        CommonBits(iNo1,iNo2);
    }
}