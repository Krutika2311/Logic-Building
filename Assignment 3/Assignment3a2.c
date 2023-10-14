// Write a program which accept number from user and print even factors of that number.
// input : 24
// output : 2 4 6 8 12

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    printf("Even Factors of given number is :\n");

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if (iNo % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d \t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}




// Time complexity : O(N/2)