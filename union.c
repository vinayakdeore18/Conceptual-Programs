#include<stdio.h>

#pragma pack(1)
struct Demo
{

    int no ;
    float f;
    int Data;
    char ch;

};

 union Hello
{

    int no ;
    float f;
    int Data;
    char ch;

};

int main()
{
    struct Demo dobj;
    union Hello hobj;


 printf("Size of structure is : %d\n", sizeof(dobj));   // 13
 printf("Sixe of union :%d\n",sizeof(hobj));            //4

 hobj.no = 11;
 printf("%d\n",hobj.no);  //11

 hobj.Data = 21;
 printf("%d\n",hobj.no);      // 21 // union memory initiallization
  printf("%d\n",hobj.Data);   // 21 // union memory initiallization

    return 0;
    
}