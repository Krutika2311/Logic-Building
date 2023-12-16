// Write application which accept file name from user and read all data from that file and display contents on screen.

/*
   Input : Demo.txt
   Output : Display all data of file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int main()
{
    char FileName[30];
    char Arr[BUFFERSIZE] = {'\0'};

    int fd = 0 , iRet = 0;

    printf("Enter the file name you want to open from current directory\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }    
    else
    {
        printf("%s gets opened succesfully.\n",FileName);

        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            printf("%s\n",Arr);      
        }

        close(fd);
    }
    return 0;
}