#include <iostream>
using namespace std;
int main(){

int A=1,B;
cout<<"Enter the A:";
cin>>B;
for(int i=B;i>=1;i--){
    A*=i;
}
cout<<"!A=:"<<A;
    return 0;
}

