#include <iostream>
using namespace std;

int leap(int birthy, int datey){
    int i,count=0;
    for(i=birthy;i<=datey;i++){
        if(i%4==0){
            count++;
        }
    }
    cout<<"count"<<count<<endl;
    return count;

}

    

int main(){
    int birthY,birthD,birthM,dateY,dateD,dateM,ageY,ageM,ageD;
    cout<<"enter your birthdate in yyyy mm dd format ";
    cin>>birthY>>birthM>>birthD;
    cout<<"enter the current date in yyyy mm dd format ";
    cin>>dateY>>dateM>>dateD;

    ageY=dateY-birthY;
    ageM=ageY*12+(dateM-birthM);
    ageD=ageY*365+(dateD-birthD)+leap(birthY,dateY)+(dateM-birthM)*30;

    cout<<"Your age in years is "<<ageY<<endl;
    cout<<"Your age in months is "<<ageM<<endl;
    cout<<"Your age in days is "<<ageD;



    


    return 0;
}