#include<iostream>

using namespace std;
// class declration
class Demo 
{
   public:   // access specifier
   int no1;   // characteristics
   int no2;  //  characteristics

   Demo()         // constructor
   {
    cout<<"Inside Constructor\n";
    no1 = 11;
    no2 = 21;
   }
   ~Demo()    // destructor
   {

    cout<<"inside destructor\n";
   }

   void fun()   // behaviour
   {
       cout<<"inside fun of demo class\n";
   }

};
int main()
{
   cout<<"inside main\n";
   Demo obj1;
   cout<<"Size of object is :"<<sizeof(obj1)<<"\n";
   cout<<"value of no1: "<<obj1.no1<<"\n";
   cout<<"value of no2:"<<obj1.no2<<"\n";
   obj1.fun();

    return 0;
}
