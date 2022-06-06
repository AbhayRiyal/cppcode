#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name;

    public:
    Student(){
        name="unknown";
    }

    Student(string name){
        this->name=name;
    }

    void display(){
        cout<<"Name of this student :"<<name<<endl;
    }

    ~Student(){
        cout<<"Object destroyed "<<endl;
    }
};

int main(){

    Student s1,s2("ravi");
    s1.display();
    s2.display();



    return 0;
}