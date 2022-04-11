#include <iostream>
using namespace std;

int power(int x, int y){
    if(y==0){
        return 1;
    }else{
        return x*power(x,y-1);
    }


}
int main(){
    int a,b,res;
    cout<<"enter the number ";
    cin>>a;
    cout<<"enter the power ";
    cin>>b;

    res=power(a,b);
    cout<<"Answer is "<<res;

    return 0;
}