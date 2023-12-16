// Write java program which acccept N numbers from user and return product of all odd elements.

/* 
Input : N : 6
        Elements : 15 66 3 70 10 88
Output : 45

Input : N : 6
        Elements : 44 66 72 70 10 88
Output : 0
*/

import java.util.*;

class Assignment35a5
{
    public static int Product(int Brr[])
    {
        int iCnt = 0, iMult = 1;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt]%2) != 0)
            {
                iMult = iMult * Brr[iCnt];
            }
        }
        return iMult;
    }

    public static void main(String Arg[])
    {
        // created scanner obj
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0;
        int iRet = 0;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];    // dynamic allocation

        System.out.println("Enter the elements : ");   
        
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        iRet = Product(Arr);

        System.out.println("Product of all odd elements is : " +iRet);

        sobj.close();
    }
}