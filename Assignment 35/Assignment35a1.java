// Write a java program which accept N numbers from user and accept one another number as NO, check whether NO is present or not.

/*
Input : N : 6
        NO : 66
        Elements : 85 66 3 66 93 88
Output : TRUE

Input : N : 6
        NO : 12
        Elements : 85 11 3 15 11 111
Output : FALSE
*/

import java.util.*;

class Assignment35a1
{
    public static boolean Check(int Brr[], int iNo)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String Arg[])
    {
        // created scanner obj
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iNo = 0;
        boolean bRet = false;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];    // dynamic allocation

        System.out.println("Enter the elements : ");   
        
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the number you want to search :");
        iNo = sobj.nextInt();

        bRet = Check(Arr, iNo);

        if(bRet == true)
        {
            System.out.println(iNo + " is Present");
        }
        else
        {
            System.out.println(iNo + " is not Present");
        }

        sobj.close();
    }
}