// Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file.

/*
   Input : Demo.txt   'M'
   Output : Frequency of M is 7.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int CountChar(char FName[], char ch)
{
    int fd = 0, iRet = 0, iCount = 0, i = 0;
    char Arr[BUFFERSIZE] = {'\0'};

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FName);
    }    
    else
    {
        printf("%s gets opened succesfully.\n",FName);

        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            for(i = 0; i < iRet; i++)
            {
                if(Arr[i] == ch)
                {
                    iCount++;
                }
            }
        }
        close(fd);
    }
    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter the file name you want to open from current directory\n");
    scanf("%s",FileName);

    printf("Enter the character to find its occurrences : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName, cValue);

    printf("Frequency of given character %c is : %d\n",cValue,iRet);

    return 0;
}