#include <iostream>
using namespace std;

bool isprime(int n){
    bool flag=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}

void primeFactors(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            if(isprime(i)){
                cout<<i<<" ";
            }
        }
    }
}


int main(){
    int n;
    cout<<"enter the number you want prime factors of :";
    cin>>n;

    primeFactors(n);

}