#include <iostream>
using namespace std;
int main(){
int S[3];
cout<<"Enter three numbers:"<<endl;
for(int i=0;i<=2;i++){
cout<<"S"<<i+1<<"=";
cin>>S[i];
}
int M=S[0];
for(int i=0;i<=2;i++){
if(M<S[i])
M=S[i];
}
cout<<"larhesst:"<<M;
    return 0;}