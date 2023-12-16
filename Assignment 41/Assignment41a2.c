// Write application which accept file name from user and create that file.

/*
   Input : Demo.txt
   Output : File created successfully
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the filename you want to create into current directory\n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create %s file\n",FileName);
    }
    else
    {
        printf("%s gets created successfully.\n",FileName);
        close(fd);
    }

    return 0;
}