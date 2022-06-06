#include <iostream>
using namespace std;
class employee{
    public:
    int salary,hra=0;

    public:
    
    employee(){
        salary=0;
      
    }
    employee(int a){
        salary=a;
      
    }
    employee(int b, int c){
        salary=b;
        hra=c;
      
    }

    void display(){
        cout<<"salary is "<<salary<<" , hra is "<<hra<<" ";
        cout<<" and total salary is "<<salary+hra<<endl;
    }


};


int main(){
    int total_salary;
    employee a,b(5000),c(7000,3000);

    cout<<"employee a ";
    a.display();
    cout<<"employee b ";
    b.display();
    cout<<"employee c ";
    c.display();

    cout<<"total salary of a,b and c  combined is "<<a.salary+b.salary+c.salary;




    return 0;
}