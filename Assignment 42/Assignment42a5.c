// Write a program which accepts file name and one count from user and read that number of characters from starting position.

/*
   Input : Demo.txt   12
   Output : Display first 12 characters from Demo.txt.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

void DisplayN(char FName[], int iSize)
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

        iRet = read(fd, Arr, iSize);

        printf("%d bytes gets successfully read from the %s.\n",iRet,FName);

        printf("Data from file is :\n");
        printf("%s\n",Arr);

        close(fd);
    }
}

int main()
{
    char FileName[30];
    int iValue = 0;
    printf("Enter the file name you want to open from current directory\n");
    scanf("%s",FileName);

    printf("Enter the number of character : \n");
    scanf(" %d",&iValue);

    DisplayN(FileName, iValue);

    return 0;
}