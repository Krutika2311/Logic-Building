/*  Problem Statement : Write a program which accept string from user and check whether it contains vowels in it or not.
    
    Input : marvellous
    Output : TRUE

    Input : XYZ
    Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'E' || *str == 'U')
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    if(bRet == true)
    {            
        printf("The String contains vowel.\n");
    }
    else
    {
        printf("Ther is no vowel in a string\n");
    }
    return 0;
}