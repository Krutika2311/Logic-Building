// Problem Statement : Accept one number from user it number is less than 10 then print "Hello" otherwise "Demo".

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello \n");
    }
    else
    {
        printf("Demo \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}