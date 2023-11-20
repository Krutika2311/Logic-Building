/* Problem Statement : Write a program which accept string from user and accept one character. Check whether that character is present in sting or not.

  Input : Marvellous Multi OS
          e
  Output : True

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char ch)
{
    while(*str!='\0')
    {
        if(*str == ch)
        {
           break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;

    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    char cValue ='\0';
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character to be searched : \n");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr,cValue);

    if(bRet==true)
    {
        printf("Character found.\n");
    }
    else
    {
        printf("Character not found.\n");
    }
    return 0;
}