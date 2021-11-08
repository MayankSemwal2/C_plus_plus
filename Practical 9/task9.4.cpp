#include<iostream>
using namespace std;
class Student{
    string name;
    int age;
    int marks;
    public:
        Student(string s,int a,int m){
            name=s;
            age=a;
            marks=m;
        }
        friend int Add(Student m);
};
int sum=0;
int c;
int Add(Student m){
    c++;
    sum=sum+m.marks;
};
int main(){
    Student s1("Mayank",18,50),s2("Manish",19,50);
    Student s3("Ram",21,50),s4("Deepak",20,50);
    Add(s1);
    Add(s2);
    Add(s3);
    Add(s4);
    cout<<"Total sum of marks of "<<c<<" students is: "<<sum<<endl;
}
