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



cout<<x<<endl;
}};

int main()
{
B obj;
obj.x=30;
// obj.y=40;  it is protected cannot be accessed through object. 
// obj.z=50;   it cannot be intialized as y is private in class A  


obj.display();
}

