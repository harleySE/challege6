#include <iostream>
using namespace std;

int main() {
  int pd=0;
  int d,e,f,g,h;
  cout<<"enter 5 times"<<endl;
  cin>>d>>e>>f>>g>>h;
  int arr[]={d,e,f,g,h};
  int a=arr[0];
  int arrSize=sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<arrSize; i++){
    if(arr[i]<a){
      // What this is doing is comparing runs against a personal best. It is not doing what the challenge requires, which
      // is to check runs against the previous day for progress.
      a=arr[i];
      pd+=1;
    }
  }
  cout<<pd<<endl;
  return 0;
}
