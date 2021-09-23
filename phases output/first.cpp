#include<iostream>
#define n   40
using namespace std;
int main()
{
int i=0;
if(n==1)
cout<<"Not a prime";
else if(n==2)
cout<<"prime number";
else
{
for( i=2;i<n;i++)
{
if(n%i==0)
break;
}
if(i==n)
cout<<"prime number";
else
cout<<"Not a prime number";
}
return 0;
}

