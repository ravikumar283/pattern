#include<iostream>

using namespace std;

void bubble(int array[],int n){

  for (int itr=0;itr<n-1;itr++){


     for(int j=0;j<=(n-1-itr);j++){
       if(array[j]>array[j+1]){
         swap(array[j],array[j+1]);
       }
     }
     
  }
}

int main(){
 
 int n;
 cin>>n;

int a[n];

for(int i=0;i<n;i++){
  cin>>a[i];
}
bubble(a,n);

for(int i=0;i<n;i++){
  cout<<a[i]<<" ";
}

 return 0;

}