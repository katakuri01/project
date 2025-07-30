#include <iostream>
using namespace std;
int main(){
for(int i=0;i<=7;i++){
    for(int j=0;j<=7;j++){
       if(j-i>0)
            cout<<" "<<-(i-j);
         else
         cout<<" "<<i-j;
        }
        cout<<endl;
    }
return 0;
}