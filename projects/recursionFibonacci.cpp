#include <iostream>
using namespace std;


int fibonacci(int a){
    if(a<2){
        return a;
    }else{
        return fibonacci(a-1)+fibonacci(a-2);
    }
}

int main(){
    int n,res;
    cout<<"enter the position of fibonacci number ";
    cin>>n;

    res=fibonacci(n);
    cout<<"fibonacci number on position "<<n<<" is "<<res;
    return 0;
}