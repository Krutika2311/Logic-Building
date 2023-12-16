// Write a java program which accept number from user and return the multiplication of all digits.

/*
Input : 2395
Output : 270

Input : 1018
Output : 0

Input : 9440
Output : 0

Input : 8462
Output : 864

*/

import java.util.*;

class Assignment34a4
{
    public static int Multiply(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo%10;
            iMult = iMult * iDigit;
            iNo = iNo/10;
        }
        return iMult;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = Multiply(iValue);

        System.out.println("Multiplication of all digits in the given number is : "+iRet);
        sobj.close();
    }
}