#include<iostream>

using namespace std;


int pasc(int n){

  int fact=1;
  for(int i=2; i<=n; i++){
    fact=fact*i;
  }
return fact;
}


int main(){

  int n,r;
  cin>>n>>r;

  for (int i=0;i<=n;i++){
    for (int j=0;j<=i;j++){
      cout<<pasc(i)/pasc(j)*pasc(i-j)<<" ";
    }
    cout<<endl;
  }
  return 0;
}