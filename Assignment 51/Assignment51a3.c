// Write a recursive program which display below patern.

/*
   Output : 5 4 3 2 1
*/

#include<stdio.h>

void DisplayR()
{
    // Logic
    static int iNo = 5;

    if(iNo >= 1)
    {
        printf("%d\t",iNo);
        iNo--;
        DisplayR();
    }    
}

int main()
{
    DisplayR(5);
    printf("\n");

    return 0;
}