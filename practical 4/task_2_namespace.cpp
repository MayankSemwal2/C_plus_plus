#include<iostream>
namespace first{
int add(int a,int b)
{
return (a+b);
}
}
namespace second{
float add(float a,float b)
{
return (a+b);
}
}
using namespace std;
using namespace first;
using namespace second;
int main()
{
cout<<add(2.1,56.0)<<"\n";
cout<<add(2.1,56)<<"\n";
cout<<add(2,56)<<"\n";
cout<<add(2.1,56.0)<<"\n";
cout<<add(2.1,56)<<"\n";
cout<<add(2,56)<<"\n";




return 0;
}
