#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char fname[30];
    int ret = 0;
    int fd = 0;
    char Data[11];

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

    lseek(fd,-7,2);
    //1 : file descriptor  kashat
    //2 : Displacement    kitine halchal
    //3 : from where      kuthun( 0: start of file 1: current position  2: End of flie) 
    read(fd,Data,6);
    
    write(1,Data,6);
    
    close(fd);

    return 0;
}