#include <iostream>
using namespace std;

int main(){
    char character;
    cout<<"enter your charcter"<<endl;
    cin>>character;
    int a=character;
    if (a>=65 && a<=90){
        cout<<"upper case character";
    }else if(a>=97 && a<=122){
        cout<<"lower case character";
    }else{
        cout<<"invalid character";
    }
 //first comment 







    return 0;
}
