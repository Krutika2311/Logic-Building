// Problem Statement : Accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 4   iCol = 4 

// Output : 
/*
   A B C D
   A B C D
   A B C D
   A B C D
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;
    char ch = '\0';

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1, ch = 'A'; jCnt <= iCol; jCnt++, ch++)
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