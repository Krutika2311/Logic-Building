// Write a recursive program which accept number from user and return smallest digit.

/*
    Input : 87983
    Output : 3
*/

#include<stdio.h>

int Min(int iNo)
{
    // Logic
    static int iMin = __INT_MAX__;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = Min(iValue);

    printf("Smallest digit in the given number %d is: %d\n",iValue,iRet);
    return 0;
}
