#include<iostream>
using namespace std;
class Base
{
   public : 
   int A,B;
   void fun()          // defination
   {
    cout<<"Base fun\n";
   }
   void gun()             // defination
   {
    cout<<"base gun\n";
   }
   void sun()               // defination
   {
    cout<<"base sun\n";
   }

};
class Derived : public Base
{
     public :
     int X,Y;
     void gun()                 // redefination
     {
          cout<<"Derived gun\n";
     }
     void sun()                 // redefination
     {
        cout<<"derived sun\n";

     }
     void run()                   // defination
     {
        cout<<"derived run\n";
     }
     

};
int main()
{
     Base bobj;
       Derived dobj;

     Base *bp = &dobj;

     bp->fun();
     bp->gun();
     bp->sun();
    // bp->run();     

    return 0;
}