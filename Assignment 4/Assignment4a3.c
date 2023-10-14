// Write a program which accept number from user and display all its non factors.

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;
    printf("Non Factors of number :\n");

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d \t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}

// Time Complexity : O(N) where N is input (natural no.)