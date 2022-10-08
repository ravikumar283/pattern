#include<iostream>

using namespace std;


int fact( int n){
  int facto=1;
  for(int i=2;i<=n;i++){
    facto=facto*i;

  }
  return facto;
  }

int main(){

  int n,r,ans;
  cin>>n>>r;

  ans = fact(n)/fact(r)*fact(n-r);

  cout<<ans;

}