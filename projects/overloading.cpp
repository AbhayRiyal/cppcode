#include <iostream>
using namespace std;

int add(int a,int b){
    int c;
    c=a+b;
    return c;
}

int add(int d,int e,int f){
    int g;
    g=d+e+f;
    return g;

}

int main(){
    cout<<"enter the numbers you want sum1 of "<<endl;
    int n1,n2,n3,sum1,sum2;
    cin>>n1>>n2>>n3;
    sum1=add(n1,n2);
    cout<<"sum1 "<<sum1<<endl;

    sum2=add(n1,n2,n3);
    cout<<"sum2 "<<sum2;
    

    






    return 0;
}