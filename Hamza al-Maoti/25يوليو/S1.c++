#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
int arr[10],F,j=0;
srand(time(0));
for(int i=0;i<=9;i++){
arr[i]=1+rand()%100;
cout<<arr[i]<<" ";}
cout<<"\npleas arrage the numbers upward \n";
for(int i=0;i<=9;i++){ 
cin>>F;
arr[i]=F;}
for(int i=0;i<=8;i++){
if(arr[i]<=arr[i+1])
j++;}
if(j==9)
cout<<"good job";
else
cout<<"wrest job";
return 0;
}

