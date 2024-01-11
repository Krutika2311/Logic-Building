// Write a program which accept matrix and reverse the contents of each column.

/*
    Input :
    3 2 5 9
    4 3 2 2
    8 4 1 5
    3 9 7 5 

    Output :
    3 2 5 9
    8 4 1 9
    4 3 2 2
    3 2 5 9
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
    public void ReverseCol()
    {
        int i = 0, j = 0;
        int iEnd = Arr.length - 1;

        for (i = 0; i < Arr.length / 2; i++) 
        {
            for (j = 0; j < Arr[i].length; j++) 
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[iEnd][j];
                Arr[iEnd][j] = temp;
            }
            iEnd--;
        }
    }
}

class Assignment47a3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        // Function calls
        mobj.ReverseCol();
        System.out.println("Matrix after reversing each column :");
        mobj.Display();

        mobj = null;
        System.gc();
    }
}