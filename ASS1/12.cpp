#include<iostream>
#include<cmath>
 using namespace std;
int main(){
    double x;
    cout<<"Enter numbers in radian :";
    cin>>x;
//Series 1:Sin(x)
int n=1;
int sign=1;
double term=x;
double sum=term;

while(fabs(term)>1e-6){
    n+=2;
    sign=-sign;
    term=sign*pow(x,n)/tgamma(n+1);
    sum+=term;
}

cout<<"Sin(x)= "<<sum<<endl;

//Series 2:
int n1=1;
double term1=1.0;
double sum1=term1;

while(fabs(term1)>1e-6){
    n1++;
    term1=pow(1.0/n1,n1);
    sum1+=term1;
}
cout<<"sum= "<<sum1<<endl;

//Series 3:cos(x)
int n2=0;
int sign2=1;
double term2=1.0;
double sum2= term2;

while (fabs(term2)>1e-6){
    n2+=2;
    sign2=-sign2;
    term2=sign2*pow(x,n2)/tgamma(n2+1);
    sum2+=term2;
}
cout<<"cos(x)= "<<sum2<<endl;
return 0;
    
}