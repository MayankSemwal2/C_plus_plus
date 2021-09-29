#include<iostream>
namespace first{
void add(int a,int b)
{
std::cout<<(a+b)<<"\n";
}
}
namespace second{
void add(float a,float b)
{
std::cout<<(a+b)<<"\n";
}
}

int main()
{
first::add(2,56);
second::add(2.9,59.98);
return 0;
}
