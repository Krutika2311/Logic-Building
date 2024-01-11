// Write a program which accept matrix and display addition of elements from each column.

/*
   Input :
   3 2 5 9 
   4 3 2 2
   8 4 1 5
   3 9 7 5

   Ouptut : 18 18 15 25
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
    public void AddColumn()
    {
        int i = 0, j = 0, iSum = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                iSum = iSum + Arr[j][i];
            }
            System.out.println("Addition of elements of column "+ i +" is : "+iSum);
            iSum = 0;
        }
    }
}

class Assignment46a4
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
        mobj.AddColumn();

        mobj = null;
        System.gc();
    }
}