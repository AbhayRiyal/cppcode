#include <iostream>
using namespace std;

void swapNum(int num1,int num2){
    int c;
    c=num1;
    num1=num2;
    num2=c;
    cout<<"swapping in funtion "<<num1<<" "<<num2<<endl;
}



int main(){
    int a,b;
    cout<<"enter the numbers you wanna swap ";
    cin>>a>>b;
    swapNum(a,b);
    cout<<"numbers after swapping was done in function  "<<a<<" "<<b;




    return 0;
}