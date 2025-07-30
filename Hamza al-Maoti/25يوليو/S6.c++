#include <iostream>
using namespace std;
int main(){
int c=10;
for(int i=1;i<10;i++){
for(int j=1;j<10;j++){
if(i==j||j==c-i)
cout << "* " ;
else
cout << "  " ;
}
cout << endl;
}
    return 0;
    }