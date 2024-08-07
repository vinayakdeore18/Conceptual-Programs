#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//O_RDONLY   READ MODE
// O_WRONLY   WRITE MODE
// O_RDWR       READ WRITE
int main()
{
     char Name[30];
     int fd =0;

     printf("enter name of file that you wnat to open  :\n");
     scanf("%s",Name);

   
    fd = open(Name, O_RDWR);
    if(fd ==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets opened with FD %d\n",fd);
    }

    close(fd);
    return 0;

}