
// Write a program which accept matrix and check whether the matrix is identity matrix or not.

/* Identity matrix is a square matrix 1's along the diagonal from upper left to lower right and 0's in all other positions.
If it satisfies the structure as explained before then the matrix is called as identity matrix. */

/*
   Input :
   1 0 0 0 
   0 1 0 0
   0 0 1 0
   0 0 0 1

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
    public boolean ChkIdentity()
    {
        int i = 0, j = 0;

        for (i = 0; i < Arr.length; i++) 
        {
            for (j = 0; j < Arr[i].length; j++) 
            {
                if ((i == j && Arr[i][j] != 1) || (i != j && Arr[i][j] != 0)) 
                {
                    return false;
                }
            }
        }
        return true;
    }
}

class Assignment47a4
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
        bRet = mobj.ChkIdentity();

        if(bRet == true)
        {
            System.out.println("Matrix is identity matrix");
        }
        else
        {
            System.out.println("Matrix is not a identity matrix");

        }
        
        mobj = null;
        System.gc();
    }
}