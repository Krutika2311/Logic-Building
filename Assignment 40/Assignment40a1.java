// Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator


import java.util.*;

class Assignment40a1
{
    public static int CountOne(int iNo)
    {
        int iCnt = 0;
        int iResult = 0;

         while(iNo != 0)
         
        {
            iResult = iNo & 1;

            if(iResult == 1)
            {
                iCnt++;
            }
            iNo = iNo >> 1;
        }
        return iCnt;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = CountOne(iNo);

        System.out.println("Count of ON (1) bits in given number is : "+iRet);
    }
}