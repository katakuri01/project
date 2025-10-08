

#include<iostream>
using namespace std;
//تعريف حجم الطابور
const int size=4;
//تعريف الطابور
int queue[size];
//تعريف واسناد قيمة اوليه لذيل الطابور
int rear=-1;
//تعريف واسناد قيمة اوليه لمقدمة الطابور
int front=0;
//تعريف واسناد قيمه لمتغير يساعد على معرفة عدد عناصر الطابور
int Specific=0;
//دالة اضاعة اعضاء للطابور
void Adqueue(int n){
//شرط التحقق اذا فيه مجال ادخول عنصر جديد
if(Specific!=size){
//هاذه خوارزميه للانتقال الى العنصر التالي في الطابور الدائري بحيث نستطيع استخدام مكان العناصر التي حذفناها 
rear=(rear+1)%size;
//هاذا المتغير كل مايزيد يعني ان فيه عنصر جديد انضاف للطابور
Specific++;
//عملية اضافة العنصر 
queue[rear]=n;
}
else
//اذا صار الطابور ممتلأ
cout << "queue is full" << endl;

}
//دالة الحذف
void Dequeur(){
//شرط التحقق اذا كان الطابور فيه اعضاء
if(Specific!=0){
//عملية الحذف او التقدم لاندكس الي بعد في مقدمة الطابور الدائري  
front=(front+1)%size;
//كل ماينقص هاذا المتغير يعني فيه عضو خرج من الطابور
Specific--;
}
else
{
//اذا كان الطافور فارغ 
cout << "queue is Empty" << endl;
}
}
void prqueue(){
//شرط التحقق من الطابور اذا كان فيه اعضاء
if(Specific!=0){
//تعريف متغير جديد يساوي قيمة مقدمة الطابور 
int endx=front;
cout << "[ " ;
//دورارة الطابور تدور على حسب كم فيه اعضاء في الطابور  
for(int i=1;i<=Specific;i++){
//عمليو اضهار القيم الي في الطابور
cout <<queue[endx]<<" ";
//عملية حذف العضو السابق والانتقال الى العضو التالي باستخدام خوارزمه. بسيطة تستخدم في الطابور الدائري
endx=(endx+1)%size;
}
cout << " ]" ;
}
else
cout << "queue is Empty" << endl;

}
int main()
{
Adqueue(8);
Adqueue(8);
Adqueue(9);
Adqueue(100);
Dequeur();
Dequeur();
Dequeur();
Dequeur();
Adqueue(9);
Adqueue(10);
Adqueue(11);
Adqueue(12);
Dequeur();
prqueue();
    return 0;
    }
