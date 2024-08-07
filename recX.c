#include<stdio.h>

void Dislay(int No)
{
     static int iCnt = 0;
    
    if(iCnt<No)
    {

        printf("jay Ganesh ..\n");
        iCnt++;
        Dislay(No); // recursive call
    }
}


int main()
{
    Dislay(4);
    printf("End of main\n");
    return 0;
}