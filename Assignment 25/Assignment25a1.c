// Problem Statement : Write a program which displays ASCII table. Table contains symbol, decimal, hexadecimal, and octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("---------- ASCII TABLE ---------\n");
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}