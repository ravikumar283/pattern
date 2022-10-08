
#include<iostream>
using namespace std;

int main(){

  int saving;
  cin>>saving;

  if(saving>5000)
  {
    cout<<"i wil go with neha"<<endl;

    if(saving>1000){
      cout<<"road trip with neha ";
    }
    else{
      cout<<"shopping with neha";
    }
  }
  else if (saving>2000){
    cout<<"i will go with rashmi";
  }
  else{
    cout<<"i will go with friends";
  }
  return 0;
}