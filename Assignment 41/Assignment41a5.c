// Write application which accept file name from user and one string from user. Write that string at the end of file.

/*
  Input : Demo.txt
          Hello World.
  Output :  Write Hello World at the end of Demo.txt
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
    int fd = 0, iRet = 0;

    printf("Enter the file name you want to open from current directory\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets opened successfully\n",FileName);
        
        printf("Enter the data that you want to write into the %s : \n",FileName);
        scanf(" %[^'\n']s",Arr);

        iRet = write(fd,Arr,strlen(Arr));

        printf("%d bytes gets successfully written at the end of file\n",iRet);

        close(fd);
    }

    return 0;
}