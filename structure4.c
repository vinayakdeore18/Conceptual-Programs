#include<stdio.h>

#pragma pack(1)
struct Student 
{
 
 int RoollNo;   //4
 char Division;  //1
 int Age;        // 4
 float marks;
 int Salary;
 

};

int main()
{
    struct Student Amit;
    struct Student Pooja;

    printf(" size of object is : %d\n",sizeof(Amit));

    Amit.RoollNo = 11;
    Amit.Division = 'A';
    Amit.marks = 90.89;
    Amit.Age = 19;
    Amit.Salary = 21000;

    printf("Age of Amit is : %d\n",Amit.Age);


    return 0;

}