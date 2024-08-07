#include<stdio.h>

void Dislay(int No)  // callee
{
    int iCnt =0;
    
    while(iCnt<No)
    {

        printf("jay Ganesh ..\n");
        iCnt++;
    }
}


int main()   // caller
{
    Dislay(4);  
    return 0;
}