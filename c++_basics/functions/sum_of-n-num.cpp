#include<iostream>

using namespace std;

// Function to find sum of n natural numbers using for loop 

int sum(int n){
  int sum1 = 0;
  for(int i = 1; i <= n; i++){
    sum1 = sum1 + i;

  }
  return sum1;


}


// Function to find sum of n natural numbers using formula
// int sum (int n)
// { 
//   int sum1=0;
//   sum1= n*(n+1)/2;
 
//   return sum1;
  
// }
int main(){

  int n;
  cin>>n;

  sum(n);
  cout<<sum(n)<<endl;
  return 0;
}