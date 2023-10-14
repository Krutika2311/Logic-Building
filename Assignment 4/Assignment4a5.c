// Write a program which accept number from user and return difference between summation of all its factors and non-factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactor = 0;
    int iNonFactor = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactor = iFactor + iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iNonFactor = iNonFactor + iCnt;
        }
    }
    return iFactor - iNonFactor;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between Summation of all its factors & non-factors is : %d\n",iRet);

    return 0;
}


// Time Complexity : O(N) where N is input (natural no.)