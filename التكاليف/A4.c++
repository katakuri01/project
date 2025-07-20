#include <iostream>
using namespace std;
int main(){
int A[5],B[5],C[5];
for(int i=0;i<=4;i++){
    cout<<"A"<<i+1<<"=";
    cin>>A[i];
     cout<<"B"<<i+1<<"=";
    cin>>B[i];
C[i]=A[i]+B[i];
}
cout<<"C=";
for(int i=0;i<=4;i++){
 cout<<C[i]<<" ";  
}

    return 0;}