#include<stdio.h>

int main ()
{
    int Arr[4][5];
   
     Arr [2][2] = 21;
     Arr [0][3] = 51;
     Arr [1][4] = 101;
     Arr [3][3] = 111;
     Arr [2][1]  = 121;
     Arr [3][0] = 151;
     Arr [3][4] = 201; 
     Arr [1][2] = 11;

    
   printf("%d\n",Arr[2][2]);
   printf("%d\n",Arr[0][3]);
   printf("%d\n",Arr[1][4]);
   printf("%d\n",Arr[3][3]);
   printf("%d\n",Arr[2][1]);
   printf("%d\n",Arr[3][0]);
   printf("%d\n",Arr[3][4]);
   printf("%d\n",Arr[1][2]);


  return 0;

}