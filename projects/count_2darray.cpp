#include <iostream>
using namespace std;

int main(){
    cout<<"enter number of rows ";
    int r;
    cin>>r;
    cout<<"enter number of columns ";
    int c;
    cin>>c;
    cout<<"number of elements you need to input = "<<r*c<<endl;
    int arr[r][c];
    int count1=0,count2=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
            if(arr[i][j]>0){
                count1++;
            }else if(arr[i][j]<0){
                count2++;
            }else{
                continue;
            }
        }
    }
        cout<<"number of positve elements in the ad array is "<<count1<<endl;
        cout<<"number of negative elements in the 2d array is "<<count2;







    return 0;
}