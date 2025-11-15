#include<iostream>
using namespace std;
class publication{
  public:
  string title;
  float price;
  void disp(){
    cout<<"The book "<<title<<" whose price is "<<price<<endl;
  }
  void getdata(){
    cout<<"Enter the Title of the book: "<<endl;
    cin>>title;
    cout<<"Enter the price of the book: "<<endl;
  cin>>price;
}
};

class book: public publication{
 public:
  int page_count;
  void disp(){
    cout<<"It has "<<page_count<<" pages in it."<<endl;
  }
  void getdata(){
    cout<<"Enter the page count of the book: "<<endl;
    cin>>page_count;
  }
};
class tape : public publication{
  public:
  float min;
  void disp(){
    cout<<"This tape has "<<min<<" of playback"<<endl;
  }
void getdata(){
  cout<<"Enter the minutes of the tapes: "<<endl;
  cin>>min;}
};
int main(){
publication p1;book b1;tape t1;
p1.getdata();
b1.getdata();
t1.getdata();
p1.disp();
b1.disp();
t1.disp();
return 0;
}
