#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("number of commnad line arguments :%d\n",argc);

    for(i=0; i<argc; i++)
    {
        printf("%s\n",argv[i]);
    }

    return 0;
}