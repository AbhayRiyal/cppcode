#include <iostream>
using namespace std;

class rectangle
{
    public:
    int length,breadth;
    public:
    
    rectangle(int length, int breadth){
        this->length=length;
        (*this).breadth=breadth;
    }
    
    int area(){
        int area;
        area=length*breadth;
        return area;
    }
};


int main(){
    int x,y;
    
    cout<<"enter the length and breath of rectangle (length!=breadth) ";
    cin>>x>>y;

    rectangle b(x,y);

    
    rectangle *ptr=&b;
    cout<<"address of the object b "<<ptr<<endl;
    cout<<"area of rectangle b with ptr "<<(*ptr).area()<<endl;
    cout<<"area of rectangle b with ptr "<<ptr->area()<<endl;


    
    

    return 0;
}