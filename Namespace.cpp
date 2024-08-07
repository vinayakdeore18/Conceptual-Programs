#include<iostream>
  // inbuilt namspace

namespace Marvellous
{
    class Demo
    {
        
    };

}

namespace PPA
{
    class Hello
    {

    };
}
using namespace Marvellous;
int main()
{
    std::cout<<"Inside main\n";   ///from using namespace std;
   Demo dobj;
    PPA::Hello hobj;

    return 0;
}