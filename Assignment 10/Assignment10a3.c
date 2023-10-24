// Write a program which accept range from user and return addition of all nos in between that range.
// (Range should contains positive nos only)


#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    
    if ((iStart > iEnd) || (iStart < 0)) 
    {
        printf("Invalid range.\n");
    } 
    else 
    {
       for (iCnt = iStart; iCnt <= iEnd; iCnt++) 
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    
    printf("Addition is : %d\n", iRet);

    return 0;
}




// Time Complexity : O(N)