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

class B : private A{

public:

void display(){
x=10;
y=20;
// z=30; cannot be accessed as z is private in class A

cout<<x<<endl<<y<<endl;
}};

int main()
{
B obj;
//obj.x=30;     it cannot be intialized as a is inherited as private variables cannot be accessed through objects
// obj.y=40;    it cannot be intialized as a is inherited as private variables cannot be accessed through objects
// obj.z=50;    it cannot be intialized as a is inherited as private variables cannot be accessed through objects


obj.display();
}

