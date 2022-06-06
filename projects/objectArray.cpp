#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name;
    int age;
    string address;

    public:

    Student(){
        name="unknown";
        age=0;
        address="not available";
    }

    void setInfo(string name,int age){
        this->name=name;
        this->age=age;
    }

    void setInfo(string name,int age,string address){
        this->name=name;
        this->age=age;
        this->address=address;
    }

    void display(){
        cout<<"Name :"<<name<<" ~ Age :"<<age<<" ~ Address :"<<address<<endl;
    }

};



int main(){
        Student s0,s1,s2,s3,s4,s5,s6,s7,s8,s9;
        
         s0.setInfo("apaar",19,"chandigarh");
         s1.setInfo("abhay",19,"chandigarh");
         s2.setInfo("aditi",19,"chandigarh");
         s3.setInfo("akshay",19,"chandigarh");
         s4.setInfo("badri",13,"bandbudh");
         s5.setInfo("budhdeb",13,"bandbudh");
         s6.setInfo("bheem",15,"dholakpur");
         s7.setInfo("nobita",14,"tokyo");
         s8.setInfo("ryotsu",25,"tokyo");
         s9.setInfo("saitama",25,"z-city");

        Student arr[10]={s0,s1,s2,s3,s4,s5,s6,s7,s8,s9};

        for(int i=0;i<10;i++){
            arr[i].display();
        }
        




    return 0;
}