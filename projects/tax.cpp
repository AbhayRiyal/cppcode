#include <iostream>
using namespace std;

float taxCalculator(int gross, int save){
    int taxable;
    taxable=gross-save;
    if(taxable<=100000){
        return 0;
    }else if(100000<taxable && taxable<=200000){
        return (taxable-100000)*0.1;
    }else if(200000<taxable && taxable<=500000){
        return 10000+(taxable-200000)*0.2;
    }else{
        return 70000+(taxable-500000)*0.3;
    }
    
}


int main(){
    int tax,grossSalary,savings;
    cout<<"enter your gross salary ";
    cin>>grossSalary;
    cout<<"enter your total savings ";
    cin>>savings;
    if(savings>100000){
        savings=100000;
    }

    tax=taxCalculator(grossSalary,savings);

    cout<<"Total amount you owe government in the form of tax is "<<tax;



    return 0;
}