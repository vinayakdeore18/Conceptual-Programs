#include<iostream>
using namespace std;



class Demo
{
    public :
      const  int X ;
      const int Y ;
      int Z;

       Demo(int i , int  j, int k ) : X(i),Y(j), Z(k)  // initiallisation list

       {
           cout<<"inside constructor\n";
           int 
       }
       
};
int main()
{
    Demo obj1(11,21);

    cout<<obj1.X<<"\n";
    cout<<obj1.Y<<"\n";

    return 0;
}