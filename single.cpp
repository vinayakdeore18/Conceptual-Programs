#include<iostream>
using namespace std;

class Base
{
   public : 
   int A,B;
   Base()
   {  
    cout<<"inside base constructor\n";
    A= 11;
    B = 21;
    }
   ~Base()
   {  cout<<"inside base destructor\n";}
   void fun()
   {   cout<<"inside base fun\n";  }

};
class Derived : public Base
{ 

    public:
  int X, Y;
  Derived()
  {  
    cout<<"inside derived constructor\n";
      X  = 51;
      Y = 101;
    }
  ~Derived()
  {  cout<<"inside derived  destructor\n";}
  void gun()
  {    cout<<"inside gun\n";   }
    
};

int main()
{
   Derived dobj;
    cout<<"size of object is :"<<sizeof(dobj)<<"\n";

    cout<<dobj.A<<"\n";  
    cout<<dobj.B<<"\n";
    cout<<dobj.X<<"\n";
    cout<<dobj.Y<<"\n";

    dobj.fun();
    dobj.gun();
    return 0;
}