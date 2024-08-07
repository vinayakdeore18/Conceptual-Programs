#include<stdio.h>

int main()
{
  
  int Arr[5]= {10,20,30,40,50};

  printf("base adress of Arr is :%d\n",Arr);
   printf("base adress of Arr is :%d\n",&Arr);
    printf("base adress of Arr is :%d\n",&(Arr[0]));

    printf("First element is :%d\n",Arr[0]);
    printf("second element is :%d\n",Arr[1]);
    printf("third element os : %d\n",Arr[2]);

    printf("%d\n",Arr[2]);
    printf("%d\n",*(Arr+2));
    printf("%d\n",*(2+Arr));
    printf("%d\n",2[Arr]);


    return 0 ;

}