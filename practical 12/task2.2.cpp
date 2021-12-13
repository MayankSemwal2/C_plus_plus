#include<iostream>
using namespace std; 
class A //base class A with constructor 
{
public:
  A(int a)  { cout << "class A " << a << endl; }
  
};

class C:public A 
{
public:

  C(int c):A(20)  { cout << "class C" << endl; }
  
};
int main(){
    C c(10);
    return 0;
}
