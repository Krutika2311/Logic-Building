// Write a program which returns difference between Even Factorial and Odd Factorial of given num.

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEven = 1;
    int iOdd = 1;
    int iAns = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    { 
        if (iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;
        }
        else
        {
            iOdd = iOdd * iCnt;
        }
    }
    iAns = iEven - iOdd;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d\n",iRet);

    return 0;
}






// Time Complexity : O(N)