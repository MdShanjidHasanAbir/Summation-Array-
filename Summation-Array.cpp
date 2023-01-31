#include <iostream>
using namespace std;
int main(){
    int size=8;
int arr[size]={};
int sum=0;
cout << "Enter 8 numbers: " <<endl;


  for (int i = 0; i < 8; ++i) {
    cin >> arr[i];
  }

for(int i=0;i<size;i++){
sum=sum+arr[i];
}
cout<<"sum="<<sum<<endl;
return 0;
}
