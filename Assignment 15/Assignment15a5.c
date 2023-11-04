// Accept N nos from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iProduct = 1;
    int iOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
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

    iRet = Product(p, iCount);
    printf("Product of all odd elements is : %d\n",iRet);

    free(p);

    return 0;
}