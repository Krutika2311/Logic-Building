// Accept N numbers from user and accept one another number as NO, check whether NO is present or not.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Dynamic Memory gets allocated successfully for %d elements\n",iSize);
    printf("Enter the %d values :\n",iSize);

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    printf("\nEnter the number to be searched :");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf(" %d is present\n",iValue);
    }
    else
    {
        printf(" %d is not present\n",iValue);
    }
    free(p);

    return 0;
}