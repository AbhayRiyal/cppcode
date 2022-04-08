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
    int largest=INT_MIN;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
            if(arr[i][j]>largest){
                largest=arr[i][j];
            }else{
                continue;
            }            
        }
    }
        cout<<"Largest element in the 2d array is = "<<largest;



    return 0;
}