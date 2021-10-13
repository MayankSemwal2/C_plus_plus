#include<iostream>
using namespace std;

int main()
{int p=0;int k=1;
int top=0,down=2;
int a[3][3]={1,2,3,4,5,6,7,8,9};
for(int i=0;i<1;i++)
{
for(int j=0;j<3;j++)



{a[i][j]=a[i][j]+a[1][2];

a[i+2][j]=a[i+2][j]-a[1][2];
}
}
while(p<=2)

{ a[p][k-1]=a[p][k-1]+2;
a[p][k+1]=a[p][k+1]-2;
p++;
}

for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{cout<<a[i][j]<<"\t";}
cout<<"\n";
}
return 0;
} 
