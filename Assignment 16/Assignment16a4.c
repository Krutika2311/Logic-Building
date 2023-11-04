// Accept N nos from user and display all such nos which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= 100) && (Arr[iCnt] <= 999))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCount = 0, iCnt = 0;
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

    Digits(p, iCount);

    free(p);
    return 0;
}