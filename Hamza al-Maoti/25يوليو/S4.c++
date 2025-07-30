#include <iostream>
using namespace std;
int main(){
int A[10];
cout<<"Enter the 10 numbers \n";
for(int i=0;i<=9;i++){
    cout<<":";
    cin>>A[i];
}
int E=A[0];
int S=A[0];
for(int i=0;i<=9;i++){
    if(E>A[i])
    E=A[i];
    if(S<A[i])
    S=A[i];
}
cout<<"Smallest number: "<<E;
cout<<"\nBiggest number: "<<S;
return 0;
}