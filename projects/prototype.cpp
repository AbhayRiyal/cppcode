#include <iostream>
using namespace std;

int add(int a,int b);


int main(){
    cout<<"enter the numbers you want sum of "<<endl;
    int sum,n1,n2;
    cin>>n1>>n2;
    sum=add(n1,n2);
    cout<<"sum is "<<sum;



    return 0;
}
int add(int a,int b){
    int c;
    c=a+b;
return c;

}