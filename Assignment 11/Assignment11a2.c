// Write a program which accept num from user and check whether it contains 0 in it or not.

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return 1;
        }
        iNo = iNo / 10;
    }
    return 0;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :\n");
    scanf("%d",&iValue);

     bRet = ChkZero(iValue);

     if(bRet == TRUE)
     {
        printf("It contains Zero\n");
     }
     else
     {
        printf("There is no zero\n");
     }

    return 0;   
}