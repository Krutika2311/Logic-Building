// Write a recursive program which display below patern.

/*
   Output : * * * * *
*/

#include<stdio.h>

void DisplayR()
{
    // Logic
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR(5);
    printf("\n");
    
    return 0;
}