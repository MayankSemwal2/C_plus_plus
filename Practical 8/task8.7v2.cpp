#include <iostream>
using namespace std;
//8.7 v3
void swap(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
   
}

int main()
{
    int a=10;
    int b=20;
    cout<<"Before swapping values of : a is "<<a<<" and b is "<<b;
    swap(&a,&b);
   cout<<"\nAfter swapping values of : a is "<<a<<" and b is "<<b;
return 0;
}
