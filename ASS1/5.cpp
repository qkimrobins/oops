#include <iostream>
using namespace std;
int main() {
    double day,fine;
cout << "Enter the number of late days:";
cin>>day;
if(day<=5){fine=50/100;cout<<"The fine is 50 paise";}
else if(day>=6&&day<=10){fine=1;cout<<"The fine is 1 rupee";}
else if(day>10){fine=5;cout<<"The fine is 5 rupee";}
else if (day>30){cout<<"Your membership is cancelled";}

    return 0;
}
