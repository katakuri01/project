#include <iostream>
using namespace std;
int main(){
int C,A[3],i=2;
cout<<"Einer a 3-dihit number\n";
cin>>C;
while(i>=0){
int x = C % 10 ;
A[i]=x;
C=C/10;
i--;
}

    if(A[0]<=A[1]&&A[1]<=A[2])
    cout<<"order";
    else
    cout<<"Not order";

    return 0;
}

