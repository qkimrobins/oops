#include<iostream>
using namespace std;
int main(){
    int c1=0,c2=0,c3=0,c4=0,c5=0,i,n,vote;
    cout<<"Enter the number of voters:";
    cin>>n;
    for(i=1;i<=n+1;i++){
        cout<<"\nVoter-"<<i<<":"<<"\n1 for cand1\n2 for cand2\n3 for cand3\n4 for cand4\n5 for cand5\nYour candidate:"<<endl;
        cin>>vote;
    if(vote==1){c1++;}
    else if (vote==2){c2++;}
    else if (vote==3){c3++;}
    else if(vote==4){c4++;}
    else if (vote==5){c5++;}
    else{
        cout<<"invailed candidate";}
    } 

    cout<<"The Final Result of the voting is:"<<endl;
    cout<<"Votes of candidate 1: "<<c1<<" votes"<<endl;
    cout<<"Votes of candidate 2: "<<c2<<" votes"<<endl;
    cout<<"Votes of candidate 3: "<<c3<<" votes"<<endl;
    cout<<"Votes of candidate 4: "<<c4<<" votes"<<endl;
    cout<<"Votes of candidate 5: "<<c5<<" votes"<<endl;
    
    return 0;

}