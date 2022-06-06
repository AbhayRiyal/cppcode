#include <iostream>
using namespace std;

class Unary{
    private:
    int a,b,c;
    public:

    Unary(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }

    void operator ++(){
        a++;
        b++;
        c++;
    }

    void operator --(){
        a--;
        b--;
        c--;
    }

    void display(){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }


};


int main(){
    int a,b,c;
    cout<<"enter 3 integers ";
    cin>>a>>b>>c;
    Unary obj(a,b,c);

    cout<<"values before operator ";
    obj.display();

    cout<<"values after ++ operator ";
    obj.operator++();
    obj.display();

    cout<<"values after -- operator ";
    obj.operator--();
    obj.display();



    return 0;
}