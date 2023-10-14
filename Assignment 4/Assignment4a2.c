// Write a program which accept number from user and display its factors in decreasing order

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    printf("Factors in Decreasing order :\n");

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactRev(iValue);

    return 0;
}

// Time Complexity : O(N/2) where N is input (natural no.)