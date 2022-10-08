#include<iostream>

using namespace std;

void selection(int array[],int n){

  for (int i=0;i<n-1;i++){
     int min_inx=i;
     for(int j=i;j<=n-1;j++){
       if(array[j]<array[min_inx]){
         min_inx=j;
       }
     }
     swap(array[i],array[min_inx]);
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