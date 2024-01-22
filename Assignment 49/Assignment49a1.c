// Write a recursive program which accept number from user and display below pattern.

/*
   Input : 5
   Output : 5 * 4 * 3 * 2 * 1 *
*/

#include<stdio.h>

void DisplayR(int iNo)
{
    // Logic
    if(iNo >= 1)
    {
        printf("%d\t*\t",iNo);
        iNo--;
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