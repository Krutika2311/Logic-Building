// Write a recursive program which accept number from user and return largest digit.

/*
    Input : 87983
    Output : 9
*/

#include<stdio.h>

int Max(int iNo)
{
    // Logic
    static int iMax = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = Max(iValue);

    printf("Largest digit in the given number %d is: %d\n",iValue,iRet);
    return 0;
}
