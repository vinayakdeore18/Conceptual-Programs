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
     char Data[]="Marvellous Infosystems";

     printf("enter name of file that you wnat to open  :\n");
     scanf("%s",Name);

   
    fd = open(Name, O_RDWR);

    iRet = write(fd,Data,22);

    printf("%d bytes gets successfully written into file\n",iRet);
    

    close(fd);
    return 0;

}