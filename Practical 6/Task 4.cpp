#include<iostream>
#include<string.h>
using namespace std;
int compare(string a, string b){
 if(a.size()==b.size())
 {
  for(int i=0;i<a.size();i++)
  {
   if(a[i]!=b[i])
   {
    return 0;
   }
  }
  return 1;
 }
 else
 return 0;
}
int main()
{
 string a="";
 getline(cin,a);
 string b="";
 getline(cin,b);
// if((a.compare(b))==0)
// cout<<"equal"<<endl;
// else
// cout<<"not equal"<<endl;
cout<<(compare(a,b)?"equal":"not equal")<<endl;
 return 0;
}
