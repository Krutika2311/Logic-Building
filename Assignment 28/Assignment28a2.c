/* Problem Statement : Write a program which accept string from user and accept one character. Return frequency of that character.

  Input : Marvellous Multi OS
          M
  Output : 2

*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character for frequency calculation : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Character frequency is : %d\n",iRet);

    return 0;
}