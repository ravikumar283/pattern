#include<iostream>
#include<climits>
using namespace std;

 main(){
 
 int n;
 cin>>n;

int a[1000];

for(int i=0;i<n;i++){
  cin>>a[i];
}
int cursum=0;
int maxsum=INT_MIN;

for(int i=0;i<n;i++){
  cursum+=a[i];
  if(cursum<0){
    cursum=0;

  }
  maxsum=max(maxsum,cursum);
}
cout<<maxsum;
 return 0;
}