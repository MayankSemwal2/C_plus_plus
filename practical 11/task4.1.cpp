#include <iostream>
using namespace std;

//super parent class
class A{
public:
    void name(){
         cout << "This is class A \n";
    }
};

//base class I
class B: virtual public A{};

//base class II 
class C: virtual public A{};
 
//derived class
class D: public B, public C{};
 
int main()
{
    D d;
    d.name();
 
    return 0;
}
