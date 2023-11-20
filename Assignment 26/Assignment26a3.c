/* Problem Statement : Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
   Input : MarvellouS
   Output : 6 (8-2)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCntSmall = 0;
    int iCntCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z')) 
        {
            iCntSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z')) 
        {
            iCntCapital++;
        }
        str++;
    }
    return iCntSmall - iCntCapital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("Count of Capital characters is : %d\n",iRet);

    return 0;
}