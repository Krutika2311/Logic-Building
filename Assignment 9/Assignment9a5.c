// Write a program which accept area in square feet and convert it into square meter
// (1 square feet = 0.0929 square meter)

#include<stdio.h>
#define SQUARE_FEET 0.0929

double SquareMeter(int iNo)
{
    double dMeter = 0.0;
    dMeter = iNo * SQUARE_FEET;
    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Area in square meter : %lf\n",dRet);

    return 0;
}


// Time Complexity : O(1)
