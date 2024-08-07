#include<stdio.h>
#include<stdlib.h> // for malloc, calloc , realloc & free


int main()
{
   int Arr[5];   // static memory allocation
   int Size = 0;
   int *ptr = NULL;

   printf("Enter no of elements :\n");
   scanf("%d",&Size);

    ptr =  (int *)malloc(Size * sizeof(int));
    //ptr = (int *)calloc(12 ,500ml);
    //ptr =(int  *)malloc(6000ml);

    //use the memory

    free(ptr);
    return 0;
}