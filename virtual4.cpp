#include<iostream>
using namespace std;
class Base
{
   public : 
   int A,B;
   void fun()          //1000 
   {
    cout<<"Base fun\n";
   }
    virtual void gun()    // 2000          
   {
    cout<<"base gun\n";
   }
   void sun()            //3000    
   {
    cout<<"base sun\n";
   }
    virtual void mun()   //4000
   {
      cout<<"Base mun\n";
   }

};
class Derived : public Base
{
     public :
     int X,Y;
      virtual void gun()        //5000         
     {
          cout<<"Derived gun\n";
     }
      virtual void sun()          //6000       
     {
        cout<<"derived sun\n";

     }
      virtual void run()         //7000          
     {
        cout<<"derived run\n";
     }
     

};
int main()
{
       Derived dobj;

     Base *bp = &dobj;

     cout<<"size of base class object is :"<<sizeof(Base)<<"\n";
     cout<<"soze of derived class object is :"<<sizeof(Derived)<<"\n";

    bp->fun();  // base fun
    bp->gun();  // derived gun
    bp->sun();   // base sun
    bp->mun();  // base mun
    //bp->run();  // error

        return 0;
}