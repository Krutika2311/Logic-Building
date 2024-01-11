// Write a program which accept matrix and one number from user and return frequency of that number.

/*
   Input :
   Number : 9

   3 2 5 9 
   4 3 2 2
   8 4 1 5
   3 9 7 5

   Ouptut : 3
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
    public int Frequency(int iNo)
    {
        int i = 0, j = 0;
        int iFrequency = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iFrequency++;
                }
            }
        }  
        return iFrequency;
    }
}

class Assignment46a2
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
        int iValue = 0;
        System.out.println("Enter the number whose frequency you want to calculate : ");
        iValue = sobj.nextInt();

        iRet = mobj.Frequency(iValue);

        System.out.println("Frequency of "+iValue+" is : "+iRet);

        mobj = null;
        System.gc();
    }
}