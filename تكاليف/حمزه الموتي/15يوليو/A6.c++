#include <iostream>
using namespace std;
int power(int n,int k){
if(k==0)
return 1;
return n*power(n,k-1);
    };
int main(){

    int i,h;
    cout<<"number1:\n";
    cin>>i;
    cout<<"number2:\n";
    cin>>h;
    cout<<power(i,h);

    return 0;
}