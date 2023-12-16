// Write java program which accept N numbers from user and display all such elements which are divisible by 3 and 5.

/*
Input : N: 6
        Elements : 85 66 3 80 93 88

Output : 15

*/


import java.util.*;

class Assignment33a4
{
    public static void Display(int Brr[])
    {
        int iCnt = 0;

        System.out.println("Elements which are divisible by 3 & 5 are : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt] % 3 == 0) && (Brr[iCnt] % 5 == 0))
            {
                System.out.print(Brr[iCnt]+" ");
            }
        }
        System.out.println();
    }

    public static void main(String Arg[])
    {
        // created scanner obj
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];    // dynamic allocation

        System.out.println("Enter the elements : ");   
        
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        Display(Arr);

        sobj.close();
    }
}