// Write a recursive program which accept number from user and return its factorial.

/*
   Input : 5
   Output : 120
*/

#include<stdio.h>

int FactR(int iNo)
{
    // Logic
    static int iCnt = 1;
    static int iFact = 1;

    if(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
        FactR(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = FactR(iValue);

    printf("Factorial of %d is : %d\n",iValue,iRet);

    return 0;
}