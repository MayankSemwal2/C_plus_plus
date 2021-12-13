#include<iostream>

using namespace std;

class Mammal{

public:

void display()
{
cout<<"I am Mammal"<<endl;
}
};

class MarineAnimal{

public:

void display(){
cout<<"I am MarineAnimal"<<endl;

}};

class Bluewhale:public Mammal, public MarineAnimal{

public:

void display3(){
cout<<"I belong to both mammal as well as marine animal"<<endl;

}};

int main()
{
Mammal obj;
obj.display();

MarineAnimal obj1;
obj1.display();

Bluewhale obj3;
obj3.display3();

obj3.display();

}
