#include<iostream>

using namespace std;

class A{

public:

int x;

protected:

int y;

private:

int z;
};

class B : public A{

public:

void display(){

x=10;
y=20;  // protected is accessable
//z=30; it cannot be intialized as y is private in class A


cout<<x<<endl<<y<<endl;
}};

int main()
{
B obj;


obj.display();
}

