// Write a recursive program which accept number from user and return its product of digits.

/*
   Input : 523
   Output : 30
*/

#include<stdio.h>

int MultR(int iNo)
{
    // Logic
    int iDigit = 0;
    static int iProduct = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iProduct = iProduct * iDigit;
        iNo = iNo / 10;
        MultR(iNo);
    }
    return iProduct;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = MultR(iValue);

    printf("Product of digits of given number %d is : %d\n",iValue,iRet);

    return 0;
}