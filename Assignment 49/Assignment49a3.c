// Write a recursive program which accept string from user and count number of characters.

/*
   Input : Hello
   Output : 5
*/

#include<stdio.h>

int Strlen(char *str)
{
    // Logic
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        {
            iCnt++;
        }
        str++;
        Strlen(str);
    }
    return iCnt;    
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    iRet = Strlen(arr);

    printf("Number of characters in the string are : %d\n",iRet);

    return 0;
}