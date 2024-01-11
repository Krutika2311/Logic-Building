// Write a program which accept matrix and swap the contents of consecutive rows.

/*
   Input :
   3 2 5 9 
   4 3 2 2
   8 4 1 5
   3 9 7 5

   Ouptut : 
   4 3 2 2
   3 2 5 9
   3 9 7 5
   8 4 1 9
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
    public void SwapRows()
    {
        int i = 0;
        int temp[];
        
        while (i < Arr.length - 1)
        {
            temp = Arr[i];
            Arr[i] = Arr[i + 1];
            Arr[i + 1] = temp;

            i = i + 2;
        }
    }
}

class Assignment46a5
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
        mobj.SwapRows();
        System.out.println("Updated Matrix is : ");
        mobj.Display();

        mobj = null;
        System.gc();
    }
}