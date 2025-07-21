#include <iostream>
using namespace std;
int main(){

for(int i=1;i<=5;i++){

  for(int j=1;j<=5;j++){  
    if(j<=i) {
    if(j+1==i||i-3==j)
cout<<"0";
else
cout<<"1";
    }
    else
    cout<<" ";
}
cout<<endl;
}
    return 0;
}