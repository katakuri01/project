
//Abdulrahman AJ-Jaradi

#include <iostream>
using namespace std;

int main(){


int M,M1=1;
char F[3][3]={
     {'1','2','3'}
    ,{'4','5','6'}
    ,{'7','8','9'}
},A='X';

 string A1,A2,A3;
 cout<<"==Writing the code for this game gas exhausted my mind==\n";
cout<<"===========Welcome to the X or O game==========\n";
    cout<<"First piayers name: ";
    cin>>A1;
    cout<<"second piayers name: ";
    cin>>A2;
    A3=A1;
      system("cls");
while(true){
   cout<<"==Writing the code for this game gas exhausted my mind==\n";
cout<<"===========Welcome to the X or O game==========\n";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<F[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"your turn "<<A3<<": ";

cin>>M;

int C=(M-1)/3;
int W=(M-1)%3;
if(F[C][W]!='X'&&F[C][W]!='O'){
 F[C][W]=A;
 M1++;   
}
else
continue;
bool Z=false;

for(int i=0;i<3;i++)
if(F[i][0]==A&&F[i][1]==A&&F[i][2]==A||F[0][i]==A&&F[1][i]==A&&F[2][i]==A)
Z=true;

if(F[0][0]==A&&F[1][1]==A&&F[2][2]==A||F[0][2]==A&&F[1][1]==A&&F[2][0]==A)
Z=true;

  system("cls");
if(Z){
    system("cls");
    cout<<"==Writing the code for this game gas exhausted my mind==\n";
cout<<"===========Welcome to the X or O game==========\n";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<F[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"\nthe Winner is "<<A3;
break;
}



if(M1==10){
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<F[i][j]<<" ";
    }
    cout<<endl;
} 
    cout<<"\nit's a tie";
    break;
}


A3=(A3==A1)?A2:A1;
A=(A=='X')?'O':'X';
system("cls");
}






    return 0;
}
//katakri