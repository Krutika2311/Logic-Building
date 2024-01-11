// Write a program which accept matrix from user and return addition of diagonal elements.

/*
   Input :
   3 2 5 9 
   4 3 2 2
   8 4 1 5
   3 9 7 5

   Ouptut : 12
*/

import java.util.*;
import LB46.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    // Logic
    public int AdditionDiagonal()
    {
        int i = 0, j = 0, iSum = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }
}

class Assignment46a1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        // Function calls
        iRet  = mobj.AdditionDiagonal();
        System.out.println("Addition of diagonal elements is : "+iRet);

        mobj = null;
        System.gc();
    }
}