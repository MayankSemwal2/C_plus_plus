#include <iostream>
using namespace std;
//8.5
long  fact (int n)
{
    if(n==1)
        return 1;
    else
        return(n*fact(n-1));
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    cout<<"Factorial of the given number is: "<<fact(n);
    
return 0;
}
