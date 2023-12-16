// Write a program which accepts file name from user and count number of capital characters from that file.

/*
   Input : Demo.txt
   Output : Number of capital characters are 23.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int CountCapital(char FName[])
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
                if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
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
    
    printf("Enter the file name you want to open from current directory\n");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);

    printf("Count of capital characters in the file are : %d\n",iRet);

    return 0;
}