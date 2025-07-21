#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    int F,i=1;
    while(i==1){

    srand(time(0));
 int K=1+rand()%500;
 cout<<"Guess the correct number :\n";
 for(int i=1;i<=5;i++){
 cin>>F;
 if(F>K){
 if(i==5)
 break;
 cout<<"Tht number is smaller:\n";
 }
 else if(F<K){
 if(i==5)
 break;
 cout<<"Tht number is bogger:\n";
 }
 else if(F==K){
 cout<<"yuo wen\n";
 break;
 }
 }
 cout<<"the number is:"<<K;
 int M;
cout<<"\nAgaen :1\n";
cout<<"exit :2\n";
cin>>M;
if(M!=1)
i++;
 }
    return 0;
}
