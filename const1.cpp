#include<iostream>
using namespace std;

const int A =10;  // constant global variable
int B = 20;

class Demo
{
    public :
       int X, Y;
       Demo()
       {

        X = 10;
        Y = 20;
       }
       void fun(int i, cont int j)  // constatnt input variable
       {

        int No1 =11;
        cont int No2 =21;  // constant local variable
        i++;  //A
        j++;   // NA
        No1++;  //A
        No2++; //NA
       }

};
int main()
{

 Demo obj1;
 const Demo obj2;       // constant object

 obj1.fun(51,101);

 obj1.X++;  // A
 obj1.Y++;   // A
 obj2.X++;    //NA
 obj2.Y++;   //NA
 A++;       //NA
 B++;   //A
    return 0;
}