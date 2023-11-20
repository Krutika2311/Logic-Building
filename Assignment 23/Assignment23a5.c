// Problem Statement : Accept number of rows and number of columns from user and display below pattern.

/*
   Input :  iRow = 5  iCol = 5
   
   Output :

   1 2 3 4 5
   1 2     5
   1   3   5
   1     4 5
   1 2 3 4 5

*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
  int iCnt = 0, jCnt = 0;

  if(iRow != iCol)
  {
    printf("Invalid input\n");
    return;
  }

  for(iCnt = 1; iCnt <= iRow; iCnt++)
  {
    for(jCnt = 1; jCnt <= iCol; jCnt++)
    {
      if((jCnt == iCnt) || (iCnt == 1) || (iCnt == iRow) || (jCnt == 1) || (jCnt == iCol))
      {
        printf("%d\t",jCnt);
      }
      else
      {
        printf("\t");
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