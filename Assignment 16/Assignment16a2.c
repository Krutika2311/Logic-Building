// Accept N nos from user and return the smallest number.

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n ");
    scanf("%d",&iCount);

    p = (int *)malloc(iCount * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate momory\n");
        return -1;
    }

    printf("Dynamic Memory gets allocated successfully for %d elements\n",iCount);

    printf("Enter the %d values : \n",iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the elements no %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p, iCount);
    printf("Smallest Number is : %d\n",iRet);

    free(p);
    return 0;
}