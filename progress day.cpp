#include <iostream>
using namespace std;

int main() {
  int pd=0;
  int d,e,f,g,h;
  cout<<"enter 5 times"<<endl;
  cin>>d>>e>>f>>g>>h;
  int arr[]={d,e,f,g,h};
  int arrSize=sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<arrSize; i++){
    if(i-1<0){
      continue;
    }
    if(arr[i]<arr[i-1]){
      pd+=1;
    }
  }
  cout<<pd<<endl;
  return 0;
}
