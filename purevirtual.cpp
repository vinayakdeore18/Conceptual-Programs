#include<iostream>

using namespace std;

class Base
{
  public :
        int A ,B;
         Base()
         {   cout<<"inside base constructor\n";  }
         int Addition(int i, int j)     // 1000
         {  return i+j ;}
         virtual int Substraction(int i, int j)   // 2000
         {  return i-j; }
         virtual int multiplication(int i , int j)=0;  
};

class Derived : public Base
{
   public:
     int X ,Y;
     Derived()
     {   cout<<"inside Derived constructor\n";  }
     int Substraction(int i , int j)     // 3000
     { return i-j; }
     int multiplication(int i , int j)    // 5000
     {   return i*j;}
      virtual int Division(int i , int j)    
     {
        return i/j;
     }
}; 

int main()
{
     //Base bobj;
  Derived dobj;
  Base *bp = &dobj;

  cout<<bp->Addition(10,11)<<"\n";  // Base addition
  cout<<bp->Substraction(10,11)<<"\n";   // derived substration
  cout<<bp->multiplication(10,11)<<"\n";  // derived multiplication
  // cout<<bp->Division(100,10)<<"\n";  // Error
    return 0;
}