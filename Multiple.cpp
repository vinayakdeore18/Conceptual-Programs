#include<iostream>
using namespace std;
class Demo
{
    public :
    int A;
    Demo()
    {
        A = 10;
        cout<<"inside demo constructor\n";
    }
    ~Demo()
    {
        cout<<"inside Demo Destructor\n";
    }
    void fun()
    {
        cout<<"inside fun of demo\n";
    }
};

class Hello
{
  public :
  int B;
  Hello()
  {
     B = 20;
        cout<<"inside Hello constructor\n";
  }
  ~Hello()
  {
    cout<<"inside Hello destructor\n";
  }
  void gun()
  {
    cout<<"inside gun of hello\n";
  }

  

};
class Marvellous : public Demo, public Hello
{
   public :
   int C;
   Marvellous()
   {
    C = 30;
      cout<<"inside Marvellous constructor\n";
   }
   ~Marvellous()
   {
    cout<<"inside Marvellous destructor\n";
   }
   void sun()
   {
     cout<<"inside sun of marvellous\n";
   }
};

int main()
{
    Marvellous mobj;

    mobj.fun();
    mobj.gun();
    mobj.sun();

    cout<<mobj.A<<"\n";
    cout<<mobj.B<<"\n";
    cout<<mobj.C<<"\n";


    return 0 ;
}