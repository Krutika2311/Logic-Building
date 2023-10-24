// Write a program which accept num from user and if number is less than 50 then print small, if greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else if(iNo >= 100)
    {
        printf("Large \n");
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}



// Time Complexity : O(N)