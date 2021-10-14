#include<iostream>
using namespace std;

int main()
{
char a[4][4];
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
a[i][j]='*';
}}
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
if(j>=i)
cout<<a[i][j];
}
cout<<"\n";
}
return 0;
}
