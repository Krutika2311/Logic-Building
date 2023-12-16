// Write a program which accept one number from user and OFF 7th bit of that number if it is ON. Return modified number.

/*
  Input : 79
  Output : 15 

  7th bit
  
0000 0000 0000 0000 0000 0000 0100 0000 
  0   0    0     0   0    0     4   0

*/


import java.util.*;

class Assignment38a1
{
    public static int OffBit(int iNo)
    {
        int iMask = 0X00000040; 
        int iResult = 0;
        iResult = iNo & iMask;


        if(iResult == iMask)   // 7th bit is ON
        {
            return (iNo ^ iMask);
        }
        else                  // 7th bit is OFF
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