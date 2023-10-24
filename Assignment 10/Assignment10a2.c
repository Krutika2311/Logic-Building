// Write a program which accept range from user and display all even nos in between that range


#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if (iStart > iEnd) 
    {
        printf("Invalid range.\nThe starting point should be less than or equal to the ending point.\n");
    } 
    else 
    {
        printf("Numbers in the range %d to %d are:\n", iStart, iEnd);
    
         for (iCnt = iStart; iCnt <= iEnd; iCnt++) 
        {
            if((iCnt % 2)== 0)
            {
            printf("%d ", iCnt);
            }
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

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}




// Time Complexity : O(N)