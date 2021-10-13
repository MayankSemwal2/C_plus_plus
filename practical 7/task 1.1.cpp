#include<iostream>
using namespace std;

int main()
{
int ch;
cout<<"1 for date \n 2 for month \n 3 for year\n";
cin>>ch;
switch(ch)
{
case 1:
cout<<"13"<<endl;
break;
case 2:
cout<<"10"<<endl;
break;
case 3:
cout<<"2021"<<endl;
break;
default:
cout<<"Invalid Choice"<<endl;
}
return 0;
}
