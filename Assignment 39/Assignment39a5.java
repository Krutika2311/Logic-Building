// Write a program which accept one number from user and toggle contents of first and last nibble of that number. Return modified number. (Nibble is a group of four bits)

/*
   1111 0000 0000 0000 0000 0000 0000 1111
    f     0    0    0    0   0    0    f
*/

import java.util.*;

class Assignment39a5
{
    public static int ToggleBit(int iNo)
    {
        int iMask = 0Xf000000f;
        int iResult = 0;
        
        iResult = iNo ^ iMask;

        return iResult;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = ToggleBit(iNo);

        System.out.println("Modified number is : "+iRet);
    }
}