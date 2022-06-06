#include <iostream>
#include <string>
using namespace std;

class ATM{
    private:
    int bankAccount,BankBalance;
    string name;

    public:
    ATM(int a,int b,string c){
        bankAccount=a;
        BankBalance=b;
        name=c;
    }

    void withdrawal(int a){
        BankBalance-=a;
        cout<<" ~ You have withdrawn "<<a<<". Transaction succesful .";
        cout<<" Your remaining bank balance is "<<BankBalance<<endl;
    }
    void balance(){
        cout<<" ~ Your current bank balance is "<<BankBalance<<endl;
    }
    void statement(){
        cout<<" ~ Your bank statement "<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Bank account no. "<<bankAccount<<endl;
        cout<<"Bank balance : "<<BankBalance<<endl;
    }
    ~ATM(){
        cout<<" ~ You have succesfully performed the operations. Enter your card again to continue.";
    }

};





int main(){
    int account,z;
    string name;
    cout<<"enter your name ";
    cin>>name;
    cout<<"enter your bank account no ";
    cin>>account;
    ATM debit_card(account,20000,name);

    debit_card.balance();
    cout<<"Enter the amount you wanna withdraw ";
    cin>>z;
    debit_card.withdrawal(z);
    debit_card.statement();
   
    return 0;
}