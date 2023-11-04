// Problem Statement : Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        if((Arr[iCnt] % 2) != 0)
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }
    return (iEven - iOdd);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Dynamic Memory gets allocated successfully for %d elements\n",iSize);

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Difference between summation of even elements and summation of odd elements is : %d\n",iRet);

    free(p);

    return 0;
}