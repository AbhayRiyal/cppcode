#include <iostream>
using namespace std;

class AddAmount{
    public:
    int amount,piggybank=50;


    AddAmount(){
        amount=0;
    }

    AddAmount( int a){
        amount=a;
    }

    int Total(){
        return amount+piggybank;
    }

};


int main(){
    int c;
    cout<<"enter the amount you wanna add to the piggybank ";
    cin>>c;
    AddAmount a,b(c);

    cout<<"Total amount in piggybank with default constructor "<<a.Total()<<endl;
    cout<<"Total amount in piggybank with parameterized constructor "<<b.Total();





    return 0;
}