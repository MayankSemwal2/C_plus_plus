#include<iostream>

using namespace std;

class Mammal{

public:

void display1()
{
cout<<"I am Mammal"<<endl;
}
};

class MarineAnimal{

public:

void display2(){
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
obj.display1();

MarineAnimal obj1;
obj1.display2();

Bluewhale obj3;
obj3.display3();

obj3.display1();
obj3.display2();


}
