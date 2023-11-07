// Problem Statement : Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 4   iCol = 5 
// Output : 
/*
   2 4 6 8 10
   1 3 5 7 9
   2 4 6 8 10
   1 3 5 7 9
*/

#include <stdio.h>

void Pattern(int iRow, int iCol) {
    
    int iCnt = 0;
    int jCnt = 0;

    for (iCnt = 1; iCnt <= iRow; iCnt++) 
    {
        if (iCnt % 2 == 0) 
        {
            for ( jCnt = 1; jCnt <= iCol; jCnt++) 
            {
                printf("%d\t", 2 * jCnt - 1);
            }
        } 
        else 
        {
            for (jCnt = 1; jCnt <= iCol; jCnt++)
            {
                printf("%d\t", 2 * jCnt);
            }
        }
        printf("\n");
    }
}

int main() {
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}
