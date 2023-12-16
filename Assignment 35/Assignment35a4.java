// Write a java program which accept N numbers from user and accept Range, Display all elements from that range.

/*
Input : N : 6
        Start : 60
        End : 90
        Elements : 85 66 3 66 93 88
Output : 85 66 76  88

Input : N : 6
        Start : 30
        End : 50        
        Elements : 85 66 3 66 93 88
Output : 
*/

import java.util.*;

class Assignment35a4
{
    public static void Display(int Brr[], int iStart, int iEnd)
    {
        int iCnt = 0;

        System.out.println("All the elements in given range are : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt] >= iStart) && (Brr[iCnt] <= iEnd))
            {
                System.out.print(Brr[iCnt] +"\t");
            }
        }
        System.out.println();
    }

    public static void main(String Arg[])
    {
        // created scanner obj
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iStart = 0, iEnd = 0;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];    // dynamic allocation

        System.out.println("Enter the elements : ");   
        
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the number range starting with :");
        iStart = sobj.nextInt();

        System.out.println("Enter the number range ending with :");
        iEnd = sobj.nextInt();

        Display(Arr, iStart, iEnd);

        sobj.close();
    }
}