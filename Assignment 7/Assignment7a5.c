// Write a program which accept number from user and display its table in reverse order


#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}



// Time Complexity : O(N)