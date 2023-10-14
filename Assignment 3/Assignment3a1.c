// Write a program which accept one number from user and print that number of even numbers on screen
// Input : 7 
// Output : 2 4 6 8 10 12 14

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 2;
      printf("Even Numbers are :\n");

    if (iNo <= 0)
    {
        iNo = -iNo;
    }


    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iEven);
        iEven = iEven + 2;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);
    return 0;
}


// Time complexity : O(N)