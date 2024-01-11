// Write a program which accept matrix and check whether the matrix is Sparse matrix or not.
// Sparse matrix is a matrix with the majority of its elements equal to zero.

/*
   Input :
   1 0 3 0
   0 6 0 0
   0 0 1 0
   9 0 0 9

   Output : TRUE
*/

import java.util.*;
import LB47.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    // Logic
    public boolean ChkSparse()
    {
        int i = 0, j = 0, iCnt = 0, iZeroCnt = 0;

        for (i = 0; i < Arr.length/2; i++) 
        {
            for (j = 0; j < Arr[i].length; j++) 
            {
                if (Arr[i][j] == 0) 
                {
                    iZeroCnt++;
                }
                else
                {
                    iCnt++;
                }
            }
        }
        if(iZeroCnt > iCnt)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Assignment47a5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;
        boolean bRet = false;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        // Function calls
        bRet = mobj.ChkSparse();

        if(bRet == true)
        {
            System.out.println("Matrix is Sparse matrix");
        }
        else
        {
            System.out.println("Matrix is not a Sparse matrix");
        }
        
        mobj = null;
        System.gc();
    }
}