#include<iostream>
#include<string>
using namespace std;
int main()
{
     string a="";
     string b="";
     getline(cin,a);
     getline(cin,b);
     if(a.compare(b)==0)
     {
         cout<<"equal string "<<endl;
         cout<<a.compare(b)<<endl;
     }
     else if(a.compare(b)>0)
     {
         cout<< b <<endl;
         cout<<a.compare(b)<<endl;
     }
      else
     {
         cout << a <<endl;
         cout<<a.compare(b)<<endl;
     }
     return 0;
}
