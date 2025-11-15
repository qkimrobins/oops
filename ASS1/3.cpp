#include <iostream>
using namespace std;
int main() {
    int gross_sal,basic,da,ta,HRA;
    cout<<"enter the basic:";
    cin>>basic;
    da=46*basic/100;
    cout<<da<<" is the DA"<<"\n";
    ta=8*basic/100;
    cout<<ta<<" is the TA"<<"\n";
    HRA=9*basic/100;
    cout<<HRA<<" is the HRA"<<"\n";
cout << "Therefore gross salaray is:"<<"\n";
gross_sal=basic+da+ta+HRA;
cout<<gross_sal;

    return 0;
}