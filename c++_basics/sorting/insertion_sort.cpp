#include<iostream>

using namespace std;

void selection(int array[],int n){
    for(int i=1;i<n;i++){
      int current=array[i];
      int j=i-1;

      while(array[j]>current && j>=0){
        array[j+1]=array[j];
        j=j-1;
      }
      array[j+1]=current;

    }

}

int main(){
 
 int n;
 cin>>n;

int a[n];

for(int i=0;i<n;i++){
  cin>>a[i];
}
selection(a,n);

for(int i=0;i<n;i++){
  cout<<a[i]<<" ";
}

 return 0;

}