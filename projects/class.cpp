#include <iostream>
using namespace std;

class rectangle
{
    private:
    int length,breadth;
    public:
    rectangle(){
        length=10;
        breadth=20;   
    }

    rectangle(int l, int b){
        length=l;
        breadth=b;
    }    
    int area(){
        int area;
        area=length*breadth;
        return area;
    }
};


int main(){
    int x,y;
    cout<<"enter the length and breadth of rectangle ";
    cin>>x>>y;
    rectangle a;
    rectangle b(x,y);

    cout<<"area with default constructors "<<a.area()<<endl;
    cout<<"area with parameterized constructor "<<b.area();

    
    

    return 0;
}