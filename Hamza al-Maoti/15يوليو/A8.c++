#include <iostream>
using namespace std;
int main(){

    for(int i=5;i>=1;i--){
        for(int j=1;j<=10;j++){
            if(i+j<=6||j-i>=5)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
     for(int i=2;i<=5;i++){
        for(int j=1;j<=10;j++){
            if(i+j<=6||j-i>=5)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
