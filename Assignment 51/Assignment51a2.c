// Write a recursive program which display below patern.

/*
   Output : 1 2 3 4 5
*/

#include<stdio.h>

void DisplayR()
{
    // Logic
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    printf("\n");

    return 0;
}