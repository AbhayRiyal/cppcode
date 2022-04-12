#include <iostream>
using namespace std;

class student
{
    public:
    int rollno;
    string name;
    void func(){
        cout<<"This function declared inside the class"<<endl;
    }
    void func2();
};

void student::func2(){
    cout<<"This function declared outside the class ";
}

int main(){

    student student1;
    cout<<"enter your roll no ";
    cin>>student1.rollno;
    cout<<"enter your name ";
    cin>>student1.name;
    cout<<"Rollno of "<<student1.name<<" is "<<student1.rollno<<endl;
    student1.func();
    student1.func2();

    return 0;
}