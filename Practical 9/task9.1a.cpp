#include <iostream>
using namespace std;

//TASK 9.1
class Student{
    int n;
    long long pn;
    string address;
public:
    void Assign(int a,long long b,string s){
        n=a;
        pn=b;
        address=s;
    }
    
    void print(string s){
        cout<<"Details of "<<s<<endl;
        cout<<"Roll number: "<<n<<endl;
        cout<<"Phone number: "<<pn<<endl;
        cout<<"Address : "<<address<<endl;
    }
};
int main()
{
    Student s,j;
    s.Assign(3,6772697489,"Delhi");
    j.Assign(7,9463749509,"Dehradun");
    s.print("Samuel");
    cout<<endl;
    j.print("Johnny");
    return 0;
}
