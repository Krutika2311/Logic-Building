// Write a recursive program which accept number from user and return its reverse number.

/*
    Input : 523
    Output : 325
*/

#include<stdio.h>

int ReverseR(int iNo)
{
    // Logic
    static int iRev = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
        ReverseR(iNo);
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = ReverseR(iValue);

    printf("Reverse of %d is: %d\n",iValue,iRet);
    return 0;
}
