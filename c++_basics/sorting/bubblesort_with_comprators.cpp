#include<iostream>

using namespace std;

bool compare(int a ,int b){
  return a < b;
}


void bubble(int array[],int n, bool (&cmp)(int a ,int b)){

  for (int itr=1;itr<=n-1;itr++){


     for(int j=0;j<=(n-itr-1);j++){
       if(cmp(array[j],array[j+1])){
         swap(array[j],array[j+1]);
       }
     }
     
  }
}

int main(){
 
 int n;
 cin>>n;

int a[1000];

for(int i=0;i<n;i++){
  cin>>a[i];
}
bubble(a,n,compare);

for(int i=0;i<n;i++){
  cout<<a[i]<<",";
}

 return 0;
}