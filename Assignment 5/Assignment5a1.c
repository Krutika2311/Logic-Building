// Problem Statement : Write a program which accept name from user and print that name.
// input : Krutika Dalvi
// output : Krutika Dalvi


#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name \n");
    scanf("%[^\n]s",Name);

    printf("Your name is %s",Name);

    return 0;

}


// Time Complexity : O (N) where N is the length of string
