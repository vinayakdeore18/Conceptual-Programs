#include<stdio.h>


// self refrential structure
struct Demo
{

    int Data;
    struct Demo *next;

};


int main()
{

    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

      obj1.Data = 11;
      obj2.next = &obj2;

      obj2.Data = 21;
      obj2.next = &obj3;

      obj3.Data = 51;
      obj3.next = NULL;

      printf("%d\n",obj1.Data);
      printf("%d\n",obj1.next->Data);
      printf("%d\n",obj1.next->next->Data);



    return 0 ;
}