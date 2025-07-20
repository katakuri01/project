#include <iostream>
using namespace std;
int main(){

for(int i=1;i<=7;i++){
for(int j=1;j<=7;j++){
if(j==i)
cout<<"*";
else if(j>i)
cout<<"1";
else
cout<<"0";
}
cout<<endl;
}

    return 0;}