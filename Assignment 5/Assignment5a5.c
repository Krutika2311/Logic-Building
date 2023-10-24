// Problem Statement : Write a program which accept total marks and obtained marks from user and calculate percentage.


#include<stdio.h>

float Percentage(int iTotal, int iMarks)
{
    float fPercentage = 0.0f;
    if((iMarks <= 0) || (iTotal <= 0))
    {
        printf("Invalid input \n");
        return fPercentage;
    }
    if(iMarks > iTotal)
    {
        printf("Invalid input \n");
        return fPercentage;
    }

    fPercentage = (((float)iMarks / (float)iTotal) * 100);
    return fPercentage;

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks : \n");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is : %f\n",fRet);

    return 0;
}



// Time Compexity : O(1) 

