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
    studentStructure s1;
    cout<<"Enter student roll no: "<<endl;
    cin>>s1.roll_no;
    cout<<"Enter student name: "<<endl;
    cin>>s1.name;
    cout<<"Enter student age: "<<endl;
    cin>>s1.age;
    cout<<"Enter student grade: "<<endl;
    cin>>s1.grade;

    return 0;
}

void display(studentStructure s){
    cout<<s.roll_no<<endl;
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.grade<<endl;
}