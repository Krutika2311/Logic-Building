// Write a program which accept matrix from user and display transpose of the matrix.
// The transpose of a given matrix is formed by interchanging the rows and columns of a matrix

/*
    Input :
    3 2 5 9
    4 3 2 2
    8 4 1 5
    3 9 7 5 

    Output :
    3 4 8 3
    2 3 4 9
    5 2 1 7
    9 2 5 5
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
    public void Transpose() 
    {
        int i = 0, j = 0;
        int[][] temp = new int[Arr[0].length][Arr.length];

        for(i = 0; i < Arr.length; i++) 
        {
            for(j = 0; j < Arr[i].length; j++) 
            {
                temp[j][i] = Arr[i][j];
            }
        }
        Arr = temp;
    }
}

class Assignment47a1
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
        mobj.Transpose();
        System.out.println("Transpose of the matrix is :");
        mobj.Display();

        mobj = null;
        System.gc();
    }
}