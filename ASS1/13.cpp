#include<iostream>
using namespace std;
int main(){
    int units,n;double ch=50;
    string name;
//number of users
    cout<<"Enter the number of users:";
    cin>>n;
//name and units
    for(int i=0;i<=n;i++)
    {cout<<"\n\nEnter Name of the User:";
    cin>>name;
    cout<<"Enter the units used:";
    cin>>units;
//price rates
    if(ch<=100){ch=0.6*units;
        cout<<"The used power is "<<units<<" and the price according to rates for user "<<name<<" is: "<<ch<<endl;}
    else if(ch>100 ||ch<=300){ch=0.8*units;
        cout<<"The used power is "<<units<<" and the price according to rates for user "<<name<<" is: "<<ch<<endl;}
    else if(ch>300){ch=0.9*units;
        cout<<"The used power is "<<units<<" and the price according to rates for user "<<name<<" is: "<<ch<<endl;}
//fine of 15%
    if(ch>300){
        ch=ch+15*ch/100;
        cout<<"Due the charge being more than 300 an additional 15% is added to the total amount\n";
        cout<<"The total amount for "<<name<<" now is: "<<ch<<endl;}
    else{
        cout<<"The total amount for "<<name<< " now is: "<<ch<<endl;}
    }

    return 0;
}