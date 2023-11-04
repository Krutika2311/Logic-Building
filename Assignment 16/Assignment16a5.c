// Accept N nos from user and display summation of digits of each number.
// N : 6
// Elements : 8225 665 3 76 953 858
// Output : 17 17 3 13 17 21

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        int iSum = 0;

        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("%d\t",iSum);
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

    DigitsSum(p, iCount);

    free(p);
    return 0;
}