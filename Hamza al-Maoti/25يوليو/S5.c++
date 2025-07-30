#include <iostream>
using namespace std;
int main(){

int A[100],E,R=0;
cout<<"Enter the number :";
cin>>E;
for(int i=E;i>0;i=i/10)
{
  A[R]=i%10;               
  R++;
}
cout<<":";
cout<<A[0]+A[R-1];
return 0;
}
