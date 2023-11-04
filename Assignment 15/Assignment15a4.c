// Accept N nos from user and accept Range, Display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCount = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements :\n ");
    scanf("%d",&iCount);

    p = (int *)malloc(iCount * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Dynamic Memory gets allocated successfully for %d elements\n",iCount);

    printf("Enter the %d values :\n",iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point :\n");
    scanf("%d",&iValue2);

    Range(p, iCount, iValue1, iValue2);

    free(p);

    return 0;
}