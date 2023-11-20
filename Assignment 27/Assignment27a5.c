/* Problem Statement : Write a program which accept string from user and count number of white spaces

  Input : MarvellouS InfoSystems
  Output : 1
*/ 

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str ==' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("Count of white space is : %d\n",iRet);

    return 0;
}