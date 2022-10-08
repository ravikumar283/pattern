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
int MaxSum=INT_MIN;
for(int i=0;i<n;i++){
  for(int j=i;j<n;j++){
    int sum=0;
    for(int k=i;k<=j;k++){
      sum+=a[k];
    }
    MaxSum=max(MaxSum,sum);
  }
}
cout<<MaxSum;
 return 0;
}