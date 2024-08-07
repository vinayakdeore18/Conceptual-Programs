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
     int iRet = 0;
     char Data[30]={'\0'};

     printf("enter name of file that you wnat to open  :\n");
     scanf("%s",Name);

   
    fd = open(Name, O_RDWR);
    lssek(fd,10,SEEK_SET);
    iRet = read(fd,Data,10);

    printf("%d bytes gets successfully raed from the file  file\n",iRet);
    
    printf("%s\n",Data);
    close(fd);
    return 0;

}