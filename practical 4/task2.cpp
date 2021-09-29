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
using namespace first;
using namespace second;
int main()
{
add(2.2,56);

return 0;
}
