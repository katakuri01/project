#include <iostream>
using namespace std;
int main(){
int K[10],S[2];
cout<<"Enter 10 numbers\n";
for(int i=0;i<=9;i++){
    cin>>K[i];
}
S[0]=K[0];
S[1]=K[0];
for(int i=0;i<=9;i++){
if(K[i]>S[0])
S[0]=K[i];
if(K[i]<S[1])
S[1]=K[i];

}
cout<<"C="<<S[0]<<"\nS="<<S[1];
    return 0;
}

