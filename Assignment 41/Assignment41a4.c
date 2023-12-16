// Write application which accept file name from user and display size of file.

/*
   Input : Demo.txt
   Output : File size is 56 bytes
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};

    int fd = 0 , iRet = 0, iCount = 0;

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

        while((iRet = read(fd,Arr,sizeof(Arr))) > 0)
        {
            iCount = iCount + iRet;
        }
        printf("File size is %d bytes\n", iCount);
        close(fd);
    }

    return 0;
}

// OR stat system call/command/structure
/*
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main()
{
    char FileName[30];
    struct stat sobj;
    int fd = 0;

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

        if (stat(FileName, &sobj) == -1) 
        {
            printf("Unable to get file information for %s\n", FileName);
        }
        else
        {
            printf("File size is : %ld bytes\n", sobj.st_size);
            
            close(fd);
        }
    }
    return 0;
}
*/