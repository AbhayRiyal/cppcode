#include <iostream>
using namespace std;

int leap(int birthy, int datey){
    int arr[25]={1940,1944,1948,1952,1956,1960,1964,1968,1972,1976,1980,1984,1988,1992,1996,2000,2004,2008,2016,2020,2024,2028,2032,2036,2040};
    int indexb,indexd;
    for(int i=0;i<=24;i++){
        if(arr[i]>=birthy){
            indexb=i;
        }
    }
    for(int i=0;i<=24;i++){
        if(arr[i]>datey){
            indexd=i-1;
        }else if(arr[i]==datey){
            indexd=i;
        }
    }
        return indexd-indexb;

}

int main(){
    int birthY,birthD,birthM,dateY,dateD,dateM,ageY,ageM,ageD;
    cout<<"enter your age in yyyy mm dd format ";
    cin>>birthY>>birthM>>birthD;
    cout<<"enter current date in yyyy mm dd format ";
    cin>>dateY>>dateM>>dateD;

    ageY=dateY-birthY;
    ageM=ageY*12+(dateM-birthM);
    ageD=ageY*365+leap(birthY,dateY)+(dateM-birthM)*30+dateD;

    cout<<"Your age in years is "<<ageY<<endl;
    cout<<"Your age in months is "<<ageM<<endl;
    cout<<"Your age in days is "<<ageD;


    


    return 0;
}