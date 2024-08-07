#include<stdio.h>


int main()
{
   int NO = 11;
   int * ptr = &NO;

    double Data = 90.9999;
    double * dptr = &Data;

  printf("%d\n",NO);                    //11
   printf("%f\n",Data);                 // 90.9999
   printf("%d\n",sizeof(NO));           //
    printf("%d\n",sizeof(ptr));
     printf("%d\n",sizeof(Data));
      printf("%d\n",sizeof(dptr));

       printf("%d\n",*ptr);
        printf("%f\n",*dptr);
      return 0;
}