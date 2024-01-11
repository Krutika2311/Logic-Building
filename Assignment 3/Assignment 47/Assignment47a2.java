// Write a program which accept matrix and reverse the contents of each row.

/*
    Input :
    3 2 5 9
    4 3 2 2
    8 4 1 5
    3 9 7 5 

    Output :
    9 5 2 3
    2 2 3 4
    9 1 4 8
    5 7 9 3
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
    public void ReverseRows()
    {
        int i = 0, j = 0;

        for (i = 0; i < Arr.length; i++) 
        {
            for (j = 0; j < Arr[i].length / 2; j++) 
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i][Arr[i].length-1 - j];
                Arr[i][Arr[i].length-1 - j] = temp;
            }
        }
    }
}

class Assignment47a2
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
        mobj.ReverseRows();
        System.out.println("Matrix after reversing each row :");
        mobj.Display();

        mobj = null;
        System.gc();
    }
}