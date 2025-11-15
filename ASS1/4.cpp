#include <iostream>
using namespace std;
int main() {
    double hard,carb,ten,fg1,fg2,fg3;
    cout<<"Enter the hardness:";
    cin>>hard;
    cout<<"Enter the carbon content:";
    cin>>carb;
    cout<<"Enter the tensile strength:";
    cin>>ten;
    if(hard>50){
        fg1=1;
    }else {fg1=0;}
    if(carb<0.7){
        fg2=1;
    }else {fg2=0;}
    if(ten>5600){
        fg3=1;
    }else {fg3=0;}
    cout<<"Calculating Grade...........";
    if(fg1==1&&fg2==1&fg3==1){cout<<"Grade 10";}
    else if (fg1==1&&fg2==1&&fg3==0){cout<<"Grade 9";}
    else if(fg2==1&&fg3==1&&fg1==0){cout<< "Grade 8";}
    else if(fg1==1&&fg3==1&&fg2==0){cout<<"Grade 7";}
    else if(fg1==1||fg2==1||fg3==1){cout<<"Grade 6";}
    else {cout<<"None of the conditions is satisfied,therefore Grade 5 ";}

    return 0;
}