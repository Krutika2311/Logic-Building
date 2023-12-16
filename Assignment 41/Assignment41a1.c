// Write application which accept file name from user and open that file in read mode.

/*
   Input : Demo.txt
   Output : File opened successfully
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the file name you want to open from current directory\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets opened successfully\n",FileName);
        close(fd);
    }

    return 0;
}