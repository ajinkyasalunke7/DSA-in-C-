#include <iostream>
using namespace std;
struct studentStructure{
    int roll_no;
    string name;
    int age;
    char grade;
};

void display(studentStructure s);

int main(){
    int num_student;
    // studentStructure s1;
    // cout<<"Enter student roll no: ";
    // cin>>s1.roll_no;
    // cout<<"Enter student name: ";
    // cin>>s1.name;
    // cout<<"Enter student age: ";
    // cin>>s1.age;
    // cout<<"Enter student grade: ";
    // cin>>s1.grade;
    // display(s1);

    // return 0;
}

void display(studentStructure s){
    cout<<s.roll_no<<endl;
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.grade<<endl;
}