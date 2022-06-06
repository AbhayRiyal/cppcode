#include <iostream>
using namespace std;

bool prime(int a){
    bool flag=true;
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}

int main(){
    int a;
    cout<<"enter number you wanna check :";
    cin>>a;

    if(prime(a)){
        cout<<a<<"  is a prime number.";
    }else{
        cout<<a<<"  is not a prime number.";
    }





    return 0;
}