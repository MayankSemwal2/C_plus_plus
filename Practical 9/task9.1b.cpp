#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int age;
    int year;
    string address;
    static int c;
    void setA(string a){
        c++;
    }
};
int Student::c=0;
int main()
{
    Student s[9];
    for(int i=0;i<9;i++){
        s[i].setA("ayush");
    }
    cout<<"Total number of student in college: "<<Student::c<<endl;
    return 0;
}
