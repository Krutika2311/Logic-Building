// Write a program which accept one number from user and OFF 7th and 10th bit of that number if it is ON. Return modified number.

/*
  Input : 577
  Output : 1 

 7th and 10th bit

0000 0000 0000 0000 0000 0010 0100 0000 
  0   0    0     0   0    2     4   0

  0X00000240

*/


import java.util.*;

class Assignment38a2
{
    public static int OffBit(int iNo)
    {
        int iMask = 0X00000240; 
        int iResult = 0;
        iResult = iNo & iMask;


        if(iResult == iMask)
        {
            return (iNo ^ iMask);
        }
        else
        {
            return iNo;
        }   
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