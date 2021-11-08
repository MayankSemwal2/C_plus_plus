#include<iostream>
using namespace std;
class Area{
public:
    int FindArea(int l,int b){
        return l*b;
    }
    int FindArea(int a){
        return a*a;
    }
};
int main(){
    Area r,s;
    cout<<"Area of rectangle: "<<r.FindArea(3,5)<<endl;
    cout<<"Area of square: "<<s.FindArea(5)<<endl;
}
