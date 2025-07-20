#include <iostream>
using namespace std;
int main(){

for(int i=1;i<=7;i++){
for(int j=13;j>=1;j--){
if(j>=7-i+1&&j<=7+i-1)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
for(int i=6;i>=1;i--){
    for(int j=1;j<=13;j++){
    if(j>=7-i+1&&j<=7+i-1)
    cout<<"*";
    else
    cout<<" ";
    }
    cout<<endl;
    }
    
    return 0;}