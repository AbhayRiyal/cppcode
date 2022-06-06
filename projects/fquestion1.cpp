#include <iostream>
using namespace std;

int max(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }else if(b>c){
        return b;
    }else{
        return c;
    }
}

int main(){
    int a,b,c,d;
    cout<<"enter 3 numbers :";
    cin>>a>>b>>c;

    d=max(a,b,c);
    cout<<"max of 3 numbers is :"<<d;



    return 0;
}