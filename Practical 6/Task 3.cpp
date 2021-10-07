#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void reverse(string a)
{
 string rev="";
 for(int i=a.size()-1;i>=0;i--)
 {
  rev=rev+a[i];
 }
 cout<<rev<<endl;
}
int main()
{
 string a="";
 getline(cin,a);
 reverse(a);
 return 0;
}
