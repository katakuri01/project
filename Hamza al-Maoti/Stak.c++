#include <iostream>
using namespace std;
//تعريف حجم المكدس
const int siz=5;
//تعريف اسم المكدس وكم حجمه
int katakuri [siz];
//تعريف التوب
int top=-1;
// تعريف داله اضافه العناصر
void pruch(int u){
    //شرط التحفف من المكدس اذكان ممتلا او لا
if(top==siz-1)
cout<<"the stack is full\n";
else
{
    //عمليه اضافه العنصر الجديد للمكدس
    top++;
katakuri[top]=u;


}
}
//داله حذف العناصر من المكدس
void pop(){
//شرط التحقق من وجود عناصو في المكدس
    if(top==-1)
        cout<<"stec is impty\n";
    else
    //عمليه حذف  اخر عنصر انضاف للمكدس
top--;
}
//داله اضهار عناصر المكدس
void print(){
    //شرط التحقق من وجود عناصر في المكدس
     if(top==-1)
        cout<<"stec is empty\n";
    else
    // عليه اضهار عناصر المكدس 
   //كما نلاحض تضهر عناصر المصفوفه عكس مانعرف.  اخر عنصر يضهر اول عنصر
   cout << "[" ;
    for(int i= top;i>=0;i--){
    cout<<katakuri[i]<<" ";
}
cout << "]"<<endl ;
}


int main(){
pruch(70);
pruch(4);
pruch(0);
pruch(666);
print();
pop();
pop();
pruch(45);
pruch(54);
pop();
print();

return 0;
}



