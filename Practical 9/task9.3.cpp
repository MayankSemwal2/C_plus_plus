#include<iostream>
using namespace std;
class Static{
    public:
        static int a;
        Static(int b){
            a++;
        }
};
int Static::a=0;
int main(){
    Static s1(98),s2(67),s3(50),s4(90),s5(20);
    cout<<"Total number of calls for a members function: "<<Static::a<<endl;
}
