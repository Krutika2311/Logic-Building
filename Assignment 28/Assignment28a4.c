/* Problem Statement : Write a program which accept string from user and accept one character. Return index of last occurrence of that character.

  Input : Marvellous Multi OS
          W
  Output : -1

  Input : Marvellous Multi OS
          M
  Output : 11

*/

#include <stdio.h>

int LastChar(char *str, char ch)
{
    int ilastIndex = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            ilastIndex = i;
        }
    }
    return ilastIndex;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%19[^\n]s", Arr);

    printf("Enter the character to find its lastindex: \n");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr,cValue);

    if (iRet != -1)
    {
        printf("Index of the last occurrence of %c is : %d\n", cValue, iRet);
    }
    else
    {
        printf("Character location not found : %d \n",iRet);
    }
    return 0;
}
