#include<iostream>
using namespace std;
class College{
    int ns;
    string cname;
public:
    struct Student{
        string sname;
        char sec;
        int rn;
    }s1;
    College(int n,string s){
        ns=n;
        cname=s;
    }
    void print(){
        cout<<"Details of college:"<<endl;
        cout<<"Name of college: "<<cname<<endl;
        cout<<"Number of students: "<<ns<<endl<<endl;
        cout<<"Details of student:"<<endl;
        cout<<"Name of student: "<<s1.sname<<endl;
        cout<<"Section of student: "<<s1.sec<<endl;
        cout<<"Roll number of student: "<<s1.rn<<endl;
    }
};
int main(){
    College c1(2300,"GEHU");
    c1.s1.sname="Mayank";
    c1.s1.sec='A';
    c1.s1.rn=3;
    c1.print();
}
