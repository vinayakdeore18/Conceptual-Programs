#include<iostream>
 using namespace std;

 class Base{
       public:
       int A;
       private :
       int B;
       protected :
       int C;
       public :
       Base()
       {    A= 10; B= 20;  C =30;}
       void fun()
       {
          cout<<A<<"\n";
          cout<<B<<"\n";
          cout<<C<<"\n";
       }
 };
 
 class Derived : public Base
 {
    void gun()
    {
        cout<<A<<"\n";
          cout<<B<<"\n";
          cout<<C<<"\n";
    }
   
 };
