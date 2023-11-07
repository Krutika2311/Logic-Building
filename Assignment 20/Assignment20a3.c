// Problem Statement : Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 5   iCol = 5 
// Output : 
/*
   a b c d e
   1 2 3 4 5
   a b c d e
   1 2 3 4 5
   a b c d e
*/

#include <stdio.h>

void Pattern(int iRow, int iCol) 
{
    int iCnt = 0;
    int jCnt = 0;
    int iNo = 1;
    char ch = 'a';
    
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            for(jCnt = 1; jCnt <= iCol; jCnt++)
            {
                printf("%d\t",iNo);
                iNo++;
            }
            iNo = 1;
        }
        else
        {
            for(jCnt = 1; jCnt <= iCol; jCnt++)
            {
                printf("%c\t",ch);
                ch++;
            }
            ch='a';
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
