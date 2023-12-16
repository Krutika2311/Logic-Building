// Write a java program which accept N numbers from user and accept one another number as NO, return index of last occurrence of that NO.

/*
Input : N : 6
        NO : 66
        Elements : 85 66 3 66 93 88
Output : 3

Input : N : 6
        NO : 93
        Elements : 85 11 3 15 11 111
Output : 4

Input : N : 6
        NO : 12
        Elements : 85 11 3 15 11 111
Output : -1
*/

import java.util.*;

class Assignment35a3
{
    public static int LastOcc(int Brr[], int iNo)
    {
        int iCnt = 0, iPos = -1;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                iPos = iCnt;
            }
        }
        return iPos;
    }

    public static void main(String Arg[])
    {
        // created scanner obj
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];    // dynamic allocation

        System.out.println("Enter the elements : ");   
        
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the number you want to find its index of Last occurrence :");
        iNo = sobj.nextInt();

        iRet = LastOcc(Arr, iNo);

        System.out.println("Index of last occurrence of " +iNo+ " is : " +iRet);

        sobj.close();
    }
}