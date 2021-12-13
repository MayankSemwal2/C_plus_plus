#include<iostream>
using namespace std; 
class A //base class A with constructor and destructor
{
public:
  A()  { cout << "class A::Constructor" << endl; }
  ~A()  { cout << "class A::Destructor" << endl; }
};
class B //base class B with constructor and destructor
{
public:
  B()  { cout << "class B::Constructor" << endl; }
  ~B()  { cout << "class B::Destructor" << endl; }
};
class C: public B, public A //derived class C inherits class A and then class B 
{
public:
  C()  { cout << "class C::Constructor" << endl; }
  ~C()  { cout << "class C::Destructor" << endl; }
};
int main(){
    C c;
    return 0;
}
