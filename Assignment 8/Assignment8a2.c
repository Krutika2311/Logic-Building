// Accept amount in US dollar and return its corresponding value in Indian currency
// Consider 1$ as 70 rupees


#include<stdio.h>

int DollartoINR(int iNo)
{
    int iRupees = 0;
    const int iDollar = 70;

    iRupees = iNo * iDollar;
    return iRupees;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD :\n");
    scanf("%d",&iValue);

    iRet = DollartoINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}



// Time Complexity : O(1)