#include<iostream>

using namespace std;

class A{

public:

int x;

};

class B : public A{};
class C : public B{};

class D : public C{
x=10;
void display()
{
cout<<x<<endl;
}

};


int main()
{

D obj;
obj.display();

}

