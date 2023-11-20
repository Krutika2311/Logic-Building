/* Problem Statement : Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

  Input : Marvellous Multi OS
          W
  Output : -1

  Input : Marvellous Multi OS
          e
  Output : 4

*/

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%19[^\n]s", Arr);

    printf("Enter the character to find its index: \n");
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr,cValue);

    if (iRet != -1)
    {
        printf("Index of the first occurrence of %c is : %d\n", cValue, iRet);
    }
    else
    {
        printf("Character location not found : %d \n",iRet);
    }
    return 0;
}
