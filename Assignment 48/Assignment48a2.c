// Write a recursive program which display below patern.

/*
   Input : 5
   Output : 1 2 3 4 5
*/

#include<stdio.h>

void DisplayR(int iNo)
{
    // Logic
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    printf("\n");

    return 0;
}