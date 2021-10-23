#include <iostream>
using namespace std;
//8.7 v2
void swap(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter swapping values of : a is "<<a<<" and b is "<<b;
}

int main()
{
    int a=10;
    int b=20;
    cout<<"Before swapping values of : a is "<<a<<" and b is "<<b;
    swap(a,b);
  
return 0;
}
