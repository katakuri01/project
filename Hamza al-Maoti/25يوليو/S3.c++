#include <iostream>
using namespace std;
int main(){
int arr[10],v=0,h;
cout<<"Enter the 10 numbers\n";
for(int i=0;i<=9;i++){
    cout<<":";
cin>>arr[i];
}
for(int i=0;i<=9;i++){
int a=0;
    for(int d=0;d<=9;d++){
if(arr[i]==arr[d])
a++;
    }
    if(a>v){
    v=a;
    h=arr[i];
    }
}
cout<<"it is: "<<h;
return 0;
}