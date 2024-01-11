// Write a program which accept matrix and return largest number from both the diagonals

/*
   Input :
   3 2 5 9 
   4 3 2 2
   8 4 1 5
   3 9 7 5

   Ouptut : 9
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
    public int MaxDiagonal()
    {
        int i = 0, j = 0, iMax = Arr[0][0];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(i == j)
                {
                    if(Arr[i][j] > iMax)
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
        }

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if((i + j) == Arr[i].length - 1)
                {
                    if(Arr[i][j] > iMax)
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
        }
        return iMax;  
    }
}

class Assignment46a3
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
        iRet = mobj.MaxDiagonal();
        System.out.println("Maximum diagonal element is : "+iRet);

        mobj = null;
        System.gc();
    }
}