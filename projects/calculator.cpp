#include <iostream>
#include <math.h>
using namespace std;

int calc(int n1,char c,int n2){
    if(c=='+'){
        return n1+n2;
    }else if(c=='-'){
        return n1-n2;
    }else if(c=='*'){
        return n1*n2;
    }else if(c=='/'){
        return n1/n2;
    }else if(c=='^'){
        return pow(n1,n2);
    }else{
        return 1;
    }

}

int main(){
    int n1,n2;
    char c;
    cout<<"Enter the expression in a+b format ";
    cin>>n1>>c>>n2;

    cout<<"answer "<<calc(n1,c,n2);





    return 0;
}