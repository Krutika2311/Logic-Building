// Problem Statement : Accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 3   iCol = 5 

// Output : 
/*
   A A A A A
   B B B B B
   C C C C C
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iRow; iCnt++, ch++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%c\t",ch);
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