// Write java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.

/*
Input : N: 6
        Elements : 85 66 3 80 93 88

Output : 53 (234-181)

*/

import java.util.*;

class Assignment33a1
{
    public static int Difference(int Brr[])
    {
        int iCnt = 0, iSumEven = 0, iSumOdd = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] % 2 == 0)
            {
                iSumEven = iSumEven + Brr[iCnt];
            }
            else
            {
                iSumOdd = iSumOdd + Brr[iCnt];
            }
        }
        return iSumEven - iSumOdd;
    }

    public static void main(String Arg[])
    {
        // created scanner obj
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iRet = 0;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];    // dynamic allocation

        System.out.println("Enter the elements : ");   
        
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        iRet = Difference(Arr);

        System.out.println("Difference between summation of even & odd elements is : "+iRet);

        sobj.close();
    }
}