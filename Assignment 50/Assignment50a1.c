// Write a recursive program which accept string from user and count white spaces.

/*
    Input : HE llo WOr lD
    Output : 3
*/

#include<stdio.h>

int WhiteSpaceR(char *str)
{
    // Logic
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpaceR(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    iRet = WhiteSpaceR(arr);

    printf("Count of whitespaces in the string are : %d\n",iRet);
    return 0;
}