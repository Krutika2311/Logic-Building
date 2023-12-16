// Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

/*
  Input : 137
  Output : 201 
*/


import java.util.*;

class Assignment38a3
{
    public static int ToggleBit(int iNo)
    {
        int iMask = 0X00000040; 
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

        System.out.println("Updated number is : "+iRet);
    }
}