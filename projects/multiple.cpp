#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(n%3==0 && n%7==0){
        cout<<"number is multiple of both 3 and 7";
    }else if(n%7==0){
        cout<<"number is a multiple of 7";
    }else if(n%3==0){
        cout<<"number is a mutiple of 3";
    }else{
        cout<<"number is not "
    }

 return 0;
}