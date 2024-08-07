#include<iostream>
using namespace std;
class Demo
{

    public:
    int A,B;
    Demo(int i, int j)
    {
        A =i;
        B=j;
    }
    Demo operator +(Demo op1, Demo op2)
    {
       cout<<"inside operator overloading function\n";
        return Demo(A+op2.A,B+op2.B);
    }
};

int main()
{
    Demo obj1(10,11);
    Demo obj2(20 ,21);
    Demo Ans(0,0);

     Ans = obj1 + obj2;   // obj1.+(obj2);  +(&obj1, obj2)   member 
    // Ans = obj1+   
     
     cout<<Ans.A<<"\t"<<Ans.B<<"\n";
    return 0;
}