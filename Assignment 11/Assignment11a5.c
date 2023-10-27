// Write a program which accept num from user and count frequency of such a digits which are less than 6.

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0; 

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("Frequency of digits less than 6 is : %d\n",iRet);

    return 0;   
}