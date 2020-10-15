#include <iostream>
using namespace std;
int main() {
  int a=0;
  int c=0;
  int d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0;
  cout<<"enter 10 numbers"<<endl;
  cin>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m;
  int arr[]={d,e,f,g,h,i,j,k,l,m};
  int arrSize=sizeof(arr)/sizeof(arr[0]);
  int b=arr[0];
  for(int i=0; i<arrSize; i++){
    if(arr[i]>a){
      a=arr[i];
    }
    else if(arr[i]<b){
      b=arr[i];
    }
    if(abs(a-b)>c){
      c=abs(a-b);
    }
  }
  cout<<"the largest absolute value is "<<c<<endl;
  return c;
}
