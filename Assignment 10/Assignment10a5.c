// Write a program which accept range from user and display all nos in between that range in reverse order.

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if (iStart > iEnd) 
    {
        printf("Invalid range.\n");
    } 
    else 
    {
        printf("Numbers in the range %d to %d in Reverse order are :\n", iStart, iEnd);
    
        for (iCnt = iEnd; iCnt >= iStart; iCnt--) 
        {
            printf("%d ",iCnt);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}




// Time Complexity : O(N)