#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


int main()
{
    char fname[30];
    int ret = 0;
    int fd = 0;
    char Data[11] = "Marvellous";

    printf("Enter the file name that you want to open\n");
    scanf("%s",fname);

    fd = open(fname, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("file sucessfully opened with fd : %d\n", fd);
    }

    ret = write(fd,Data,10);
    if(ret == 0)
    {
        printf("unable to write\n");
    }



    return 0;
}