#include<iostream>
using namespace std;
//8.6 

void series(int n)
{ 

if(n==1)
{
 cout<<"2";
    return;
}
else
    series(n-1);

cout<<",("<<n<<"^"<<n<<"+"<<n<<")";
}


int main()
{ int n;
  cout<<"Enter n:";
  cin>>n;
  series(n);
   return 0;
}
