#include<iostream>
#include<math.h>

using namespace std;

int main()
{

int n;
float sum=0;
int lastdigit;
cin>>n;
int originaln=n;

while(n>0){
lastdigit = n%10;
sum+= pow(lastdigit,3);
n=n/10;
}
if (sum==originaln){
  cout<<"armstrong";
}
else{
  cout<<"not armstrong";
}

return 0;

}