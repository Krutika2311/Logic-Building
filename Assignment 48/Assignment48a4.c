// Write a recursive program which display below patern.

/*
   Input : 6
   Output : A B C D E F
*/

#include<stdio.h>

void DisplayR(int iNo)
{
    // Logic
    static int iCnt = 1;
    static char ch = 'A';

    if(iCnt <= iNo)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
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