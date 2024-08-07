#include<iostream>
using namespace std;

class Marvellous 
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
class Demo : public Marvellous
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

class Hello : public Marvellous
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


int main()
{
   Demo dobj;
   Hello hobj;

    return 0 ;
}