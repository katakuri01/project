
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
string A[3]{"stone","Paper","scissors"};
int a,b;
srand(time(0));
cout <<"|===Luck game gainst Katakuri===|\n\n";
while(true){
int k=0+rand()%3;
cout << "stone:0 | Paper:1 | scissors:2  :" ;
cin >> a;
if(a>=3||a<0){
cout << "error" << endl;
continue;
}
if(k==0)
b=0;
if(k==1)
b=1;
if(k==2)
b=2;
//-------
 system("cls");
if(a==0&&b==2||a==1&&b==0||a==2&&b==1)
cout << "[You won]" <<" you:"<<A[a]<<" | katkaut:"<<A[b]<<endl;
else if(a==0&&b==0||a==1&&b==1||a==2&&b==2)
cout << "[It's a draw]" <<" you:"<<A[a]<<" | katkaut:"<<A[b]<<endl;
else
cout << "[Katakuri he won]" <<" you:"<<A[a]<<" | katkaut:"<<A[b]<<endl;

cout << "again:1\nclosing: Enter any number\n: " ;
int m;
cin>>m;
 system("cls");
if(m!=1)
break;
}
    return 0;
    }