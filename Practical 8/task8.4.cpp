#include <iostream>
using namespace std;
//8.4
long  fact (int n)
{
    int p=1;
    while(n!=0)
    {
        p=p*n;
        --n;
    }
    return p;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    cout<<"Factorial of the given number is: "<<fact(n);
    
return 0;
}
