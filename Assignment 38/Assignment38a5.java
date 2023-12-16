// Write a program which accept one number from user and ON its first 4 bits. Return modified number.

/*
  Input : 73
  Output : 79 
  
0000 0000 0000 0000 0000 0000 0000 1111 
  0   0    0     0   0    0     0   f

  0X0000000f

*/


import java.util.*;

class Assignment38a5
{
    public static int OnBit(int iNo)
    {
        int iMask = 0X0000000f; 
        int iResult = 0;

        iResult = iNo | iMask;

        return iResult;   
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);

        System.out.println("Modified number is : "+iRet);
    }
}