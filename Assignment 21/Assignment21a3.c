// Problem Statement : Accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 5   iCol = 5 

// Output : 
/*
   $ * * * *
   * $ * * *
   * * $ * *
   * * * $ *
   * * * * $
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    if(iRow != iCol)
    {
      printf("Invalid Input\n");
      return;
    }

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
       {
         if ((iCnt == jCnt))
        { 
            printf("$\t");
        } 
        else
        {
            printf("*\t");
        }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}