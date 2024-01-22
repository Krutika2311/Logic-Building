// Write a recursive program which display below patern.

/*
   Output : a b c d e f
*/

#include<stdio.h>

void DisplayR()
{
    // Logic
    static int iCnt = 1;
    static char ch = 'a';

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