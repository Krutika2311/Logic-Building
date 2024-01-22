// Write a recursive program which display below patern.

/*
   Input : 5
   Output : * * * * *
*/

#include<stdio.h>

void DisplayR(int iNo)
{
    // Logic
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number to display the pattern : \n");
    scanf("%d",&iValue);

    DisplayR(iValue);
    printf("\n");
    
    return 0;
}