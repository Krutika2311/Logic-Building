// Accept N nos from user and accept one another number as No, return index of last occurence of that No.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0, iValue = 0;
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

    printf("Enter the number to find its index :\n");
    scanf("%d",&iValue);

    iRet = LastOcc(p, iCount, iValue);

    if(iRet == -1)
    {
        printf("There is no such number %d\n",iRet);
    }
    else
    {
        printf("Last occurence of %d at index %d\n",iValue,iRet);

    }
    free(p);

    return 0;
}