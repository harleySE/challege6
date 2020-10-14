#include <iostream>
using namespace std;
int main() {
  int a;
  int b;
  int c=0;
  int d,e,f,g,h,i,j,k,l,m;
  cout<<"enter 10 numbers"<<endl;
  cin>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m;
  int arr[]={d,e,f,g,h,i,j,k,l,m};
  int arrSize=sizeof(arr)/sizeof(arr[0]);
  
  // You have a loop here with index "j", but "j" isn't used anywhere in the loop. Why?
  // Also, it's not likely that this works. You are moving through the array only comparing
  // adjacent elements. It should be checking all combinations, if you do it this way.
  // There may be a better way, though
  for(int j=arrSize; j>0; j--){
    for(int i=0; i<arrSize; i++){
      if(arr[i]>arr[i-1]){
        a=arr[i];
      }
      else if(arr[i]<arr[i-1]){
        b=arr[i];
      }
      if(abs(a-b)>c){
        c=abs(a-b);
      }
    }
  }
  cout<<"the largest absolute value is "<<c<<endl;
  return c;
}
