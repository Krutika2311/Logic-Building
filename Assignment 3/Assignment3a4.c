// Accept one character from user and convert case of that character.

#include<stdio.h>

void DisplayConvert(char CValue)
{
    char cAns = '\0';

    if(CValue >= 'a' && CValue <= 'z')
    {
        cAns = CValue - 32;
        printf("%c \n",cAns);
    }
     else if(CValue >= 'A' && CValue <= 'Z')
    {
        cAns = CValue + 32;
        printf("%c\n",cAns);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}


// Time complexity : O(1)