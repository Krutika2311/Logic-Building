// Write a recursive program which accept string from user and count number of small characters.

/*
    Input : HElloWOrlD
    Output : 5
*/

#include<stdio.h>

int SmallR(char *str)
{
    // Logic
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
        SmallR(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    iRet = SmallR(arr);

    printf("Count of Small Characters in the string are : %d\n",iRet);
    return 0;
}