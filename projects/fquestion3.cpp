#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;

}

int main(){
    int a,b;
    cout<<"enter 2 numbers :";
    cin>>a>>b;

    swap(a,b);

    cout<<"value of a after swap function :"<<a<<endl;
     cout<<"value of b after swap function :"<<b<<endl;




    return 0;
}