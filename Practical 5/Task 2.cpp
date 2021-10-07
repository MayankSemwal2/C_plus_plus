#include<iostream>
using namespace std;
void charFunction()
{
cout<<"char:"<<endl;
 char a='A';
 cout << sizeof(char)<<endl;
 cout << sizeof(a)<<endl;
}
void boolFunction()
{
cout<<"bool:"<<endl;
 int a=7;
 bool b=(a>5);
 cout << sizeof(bool)<<endl;
 cout << sizeof(a)<<endl;
}
void shortFunction()
{
cout<<"short:"<<endl;
 short a=2;
 cout << sizeof(short)<<endl;
 cout << sizeof(a)<<endl;
}
void intFunction()
{
cout<<"int:"<<endl;
 int a=523457;
 cout << sizeof(int)<<endl;
 cout << sizeof(a)<<endl;
}
void longFunction()
{
cout<<"long:"<<endl;
 long a=521684949;
 cout << sizeof(long)<<endl;
 cout << sizeof(a)<<endl;
}
void floatFunction()
{
cout<<"float:"<<endl;
 float a=1.234f;
 cout << sizeof(float)<<endl;
 cout << sizeof(a)<<endl;
}
void doubleFunction()
{
cout<<"double:"<<endl;
 double a=1.234678;
 cout << sizeof(double)<<endl;
 cout << sizeof(a)<<endl;
}
void longdoubleFunction()
{
cout<<"longdouble:"<<endl;
 long double a=2^80;
 cout << sizeof(long double)<<endl;
 cout << sizeof(a)<<endl;
}
void widecharFunction()
{
cout<<"widechar:"<<endl;
 wchar_t a=L'\0';
 cout << sizeof(wchar_t)<<endl;
 cout << sizeof(a)<<endl;
}
int main()
{
 charFunction();
 boolFunction();
 shortFunction();
 intFunction();
 longFunction();
 floatFunction();
 doubleFunction();
 longdoubleFunction();
 widecharFunction();
 return 0;
}
