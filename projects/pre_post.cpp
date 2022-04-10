#include <iostream>
using namespace std;


int main(){
    
    int a=10,b;
    b=++a;
    cout<<"pre-increment"<<endl;
    cout<<a<<endl; // 11
    cout<<b<<endl; // 10
    cout<<"post-increment"<<endl;
    a=10;
    b=a++;
    cout<<a<<endl; // 11
    cout<<b<<endl; // 10
    //decrement operators
    a=10;
    cout<<"pre-decrement"<<endl;
    b=--a;
    cout<<a<<endl; // 9
    cout<<b<<endl; // 9

    a=10;
    cout<<"post-decrement"<<endl;
    b=a--;
    cout<<a<<endl; // 9
    cout<<b<<endl; // 10
    

    
return 0;
}