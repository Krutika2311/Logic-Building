// Write a recursive program which display below patern.

/*
   Output : A B C D E F
*/

#include<stdio.h>

void DisplayR()
{
    // Logic
    static int iCnt = 1;
    static char ch = 'A';

    if(iCnt <= 6)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
        DisplayR();
    }
}

int main()
{
    DisplayR(6);
    printf("\n");

    return 0;
}