
// عبدالرحمن محمد علي الجرادي
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int gt;
// المصفوفات
void array1()
{
luffy6:
    int X[10], Y[10], Z[20], l = 0, v = 0;

    cout << "\nEnter the values of the array [X]\n";
    //[X]ادخال القيم المصفوفه
    for (int i = 0; i < 10; i++)
    {
    kata:
        cin >> X[i];
        // هنا يتم ادخال عناصر المصفوفه
        for (int j = 0; j < i; j++)
        {
            if (X[i] == X[j]) // هنا يتحقق اذا كان العنصر موجود من قبل
            {
                cout << "item already exists Enter new itrm: ";
                // العنصر الذي ادخلته موجود ادخل عنصر جديد
                goto kata;
                // اذكان العنصر موجود ينتقل لكي يعيد المستخدم ادخال عنصر جديد
            }
        }
    }
    system("cls");
    cout << "\nEnter the values of the array [Y]\n";
    //[Y]ادخال قيم المصفوفه
    for (int i = 0; i < 10; i++)
    {
    kata1:
        cin >> Y[i]; // هنا يتم ادخال عناصر المصفوفه
        for (int j = 0; j < i; j++)
        {
            if (Y[i] == Y[j]) // هنا يتحقق اذا كان العنصر موجود من قبل
            {
                cout << "item already exists.Enter new itrm: ";
                // العنصر الذي ادخلته موجود ادخل عنصر جديد
                goto kata1;
                // اذكان العنصر موجود ينتقل لكي يعيد المستخدم ادخال عنصر جديد
            }
        }
    }
    system("cls");
luffy:

    cout << "\n               ======THE ONE-DIMENSIONAL ARRAY======\n";
    cout << "======================================================================================\n";
    cout << "1:Arrange even numbers on one side and odd numbers on the other in matrix [x]\n";
    //[X]ترتيب الاعداد الفرديه في جهه والازوجيه في جهه للمصفوفه
    cout << "2:Print the prime numbers in the matrix [Y]\n";
    //[Y]طياعه الاعداد الاويه للمصفوفه
    cout << "3:Merge the two matrices into a third matrix [Z] without repeating values.\n";
    // مع عدم تكرار [Z] دمج المصفوفتين في مصفوفه ثالثه
    cout << "4:Find the largest and smallest values in the matrix [Z].\n";
    //[Z]العثور على اصغر واكبر فيمه في المصفوفه
    cout << "5:Find the sum of the two matrices.\n";
    // ايجاد مجوع المصفوفتين
    cout << "6:if uou want to change the values of the galves \n";
    // اعاده اسناد فيم للمصفوفات
    cout << "7:To take a step back\n";
    // للرجوع خطوه للخلفف
    cout << "8:To return to the main menu\n";
    // للعوده للقائمة الرئسيه
    cout << "======================================================================================\n";
    cout << ":";
    cin >> gt;
    system("cls");
    if (gt == 6)
        goto luffy6;
    switch (gt)
    {
    case 1:
    {
        //[X]ترتيب الاعداد الفرديه في جهة والاعداد الزوجية في جهة اخرى في المصفوفة
        int b = 0;
        for (int i = 0; i < 10; i++)
            if (X[i] % 2 == 0)
            {
                int c = X[i];
                X[i] = X[b];
                X[b] = c;
                b++;
            }
        for (int i = 0; i < 10; i++)
        {
            cout << X[i] << " ";
        }
        cout << "\nTo go vacl enter :1\n";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto luffy;
    }
    break;
    case 2:
    { //[Y]طباعه الاعداد الاوليه في المصفوفه
        for (int i = 0; i < 10; i++)
        {
            if (Y[i] > 0)
            {
                int mb = 0;
                if (Y[i] % 2 == 1 || Y[i] == 2)
                {
                    for (int j = 2; j < Y[i]; j++)
                        if (Y[i] % j == 0)
                        {
                            mb++;
                        }
                }
                if (mb == 0)
                {
                    cout << Y[i] << " ";
                }
            }
        }
        cout << "\nTo go vacl enter :1\n";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto luffy;
        break;
    }
    case 3:
        // دمح المصفوفتين في مصفوفه ثالثه مع عدم تكورار القيم
        {

            for (int i = 0; i < 10; i++)
            {
                Z[i] = X[i];
            }
            for (int i = 0; i < 10; i++)
            {

                int s = 0;
                for (int m = 0; m < 10 + v; m++)
                {
                    if (Z[m] == Y[i])
                    {
                        s++;
                        break;
                    }
                }
                if (s == 0)
                {
                    Z[10 + v] = Y[i];
                    v++;
                }
            }
            for (int j = 0; j < 10 + v; j++)
                cout << Z[j] << " ";

            cout << "\nTo go vacl enter :1\n";
            cin >> gt;
            system("cls");
            if (gt == 1)
                goto luffy;
            break;
        case 4:
        { //[Z]ايجاد اكبر واصغر قيمة في المصفوفة
            int m = Z[0];
            int q = Z[0];
            for (int b = 0; b < 10 + v; b++)
            {
                if (m < Z[b])
                    m = Z[b];
                if (q > Z[b])
                    q = Z[b];
            }
            cout << "\nthe max value is: " << m << endl;
            cout << "the man vslue is : " << q << endl;

            cout << "\nTo go vacl enter :1\n";
            cin >> gt;
            system("cls");
            if (gt == 1)
                goto luffy;
        }
        }
        break;

    case 5:

    { //[y]+[X]ايجاد جمع المصفوفتين

        for (int i = 0; i < 10; i++)
        {
            cout << X[i] + Y[i] << " ";
        }

        cout << "\nTo go vacl enter :1\n";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto luffy;
    }
    }
}
void array2()
{
Zoro6:
    cout << "Enter the values of the array [A]\n";
    int A[3][3], B[3][2];
    //[A]ادخال قيم المصفوفه
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    //[B]ادخال قيم المصفوفه
    system("cls");
    cout << "\nEnter the values of the array [B]\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }
    system("cls");
Zoro:
    cout << "\n               ======THE TWO-DIMENSIONAL ARRAY======\n";
    cout << "====================================================================================\n";
    cout << "1:To sort the elements of the array [A] in ascending order\n";
    // تصاعديا[A]لترتيب عناصر المصفوفه
    cout << "2:To multiply the two matrices\n";
    // لضرب المصفوفتين
    cout << "3:To search for a value in the array [B] and print the element's location\n";
    // وطباعة موقعها[B]للبحث عن قيمة في المصفوفه
    cout << "4:To print the most repeated value in the array [A] along with its frequency\n";
    // مع عدد التكرار[A]لطباعة اكثر قمية تكررت في المصفوفه
    cout << "5:To convert the array [A] into a one-dimensional array\n";
    // الى مصفوفه احاديه[A]لتحويل المصفوفه
    cout << "6:To reassign values to the arrays\n";
    // لاعادة اسناد القيم للمصفوفات
    cout << "7:To take a step back\n";
    // للرجوع خطوه للخلفف
    cout << "8:To return to the main menu\n";
    // للعوده للقائمة الرئسيه
    cout << "====================================================================================\n";
    cout << ":";
    cin >> gt;
    system("cls");
    if (gt == 6)
        goto Zoro6;

    switch (gt)
    {
    case 1:
        // تصاع[A]ترتيب المصفوفه
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {

                int n1 = i % 3, m1 = i / 3;
                int n2 = j % 3, m2 = j / 3;
                if (A[m1][n1] < A[m2][n2])
                {
                    int z = A[m1][n1];
                    A[m1][n1] = A[m2][n2];
                    A[m2][n2] = z;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << A[i][j] << " ";
            }
        }

        cout << "\nTo go vacl enter :1\n";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto Zoro;
        break;

    case 2:
        // ايجاد قيه الضرب المصفوفتين
        cout << endl;
        int V[3][2];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                V[i][j] = 0;
                for (int x = 0; x < 3; x++)
                {
                    V[i][j] += A[i][x] * B[x][j];
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << V[i][j] << " ";
            }
        }

        cout << "\nTo go vacl enter :1\n";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto Zoro;
        break;

    case 3:
    Zoro3:
        // وطباعة عنوانها[B]ابحث عن قيمة في المصفوفة
        cout << "B={";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << B[i][j] << " ";
            }
        }
        cout << "}";
        int nn;
        cout << "\nEintre the dark you and you will be out of order: \n";
        cin >> nn;
        system("cls");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (B[i][j] == nn)
                {
                    cout << "ltem address is: " << &B[i][j] << endl;
                }
            }
        }
        cout << "\n==================================================\n";
        cout << "if yuo wamt to use the progeam ahain Enter :1\n";
        // لاستخدام البرنامج مره اخرا
        cout << "To go vacl enter :2\n";
        // للرجوع خطوه للخلف
        cout << "==================================================\n";
        cout << ":";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto Zoro3;
        if (gt == 2)
            goto Zoro;
        break;
    case 4:
        // مع عدد التكرار[A]طباعة اكثر قيمة تكررت في المصفوفة
        int ff;
        ff = 0;
        int ww;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int aa = A[i][j];
                int mm = 0;
                for (int a = 0; a < 3; a++)
                {
                    for (int t = 0; t < 3; t++)
                    {
                        if (A[a][t] == aa)
                        {
                            mm++;
                        }
                    }
                }
                if (mm > ff)
                {
                    ff = mm;
                    ww = aa;
                }
            }
        }
        cout << "\nthe value is : " << ww << endl;
        cout << "\nRepeated: " << ff << endl;

        cout << "\nTo go vacl enter :1\n";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto Zoro;

        break;
    // الى مصفوفة احادية[A]حول المصفوفه
    case 5:
        int AA[9], w = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                AA[w] = A[i][j];
                w++;
            }
        }
        cout << "\n";
        for (int i = 0; i < 9; i++)
        {
            cout << AA[i] << " ";
        }
        cout << "\nTo go vacl enter :1\n";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto Zoro;
        break;
    }
}
void Array()
{

Array:
    cout << "\n======ARRAY======\n";
    cout << "================================\n";
    cout << "1:The one-dimensional array\n";
    // المصفوفة أحادية البعد
    cout << "2:The two-dimensional array\n";
    // المصفوفه ثنائية البعد
    cout << "3:To return to the main menu\n";
    // للعوده للقائمة الرئسيه
    cout << "\n================================\n";
    cout << ":";
    cin >> gt;
    system("cls");
    switch (gt)
    {
    case 1:
        array1();
        if (gt == 7)
            goto Array;
        break;

    case 2:
        array2();
        if (gt == 7)
            goto Array;
    }
}
// الدوال
void FF()
{
    int x;
    cout << "Entir the any number: ";
    cin >> x;
    int even = 0, odd = 0, prime = 0;
    for (int i = 0; i < x; i++)
    {
        int y = 0;
        if (i % 2 == 0)
        {
            even += i;
        }
        if (i % 2 == 1)
        {
            odd += i;
        }
        if (i % 2 == 1 || i == 2)
        {

            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    y++;
                }
            }

            if (y == 0)
            {
                prime += i;
            }
        }
    }
    cout << "Even=" << even;
    cout << "\nodd=" << odd;
    cout << "\nprime=" << prime;
}
int vv(int z, int n)
{
    if (n == 0)
        return z;
    return vv(n, z % n);
}
void VV()
{
    int x, y;
    cout << "Enter the number1:";
    cin >> x;
    system("cls");
    cout << "Enter the number2:";
    cin >> y;
    system("cls");
    cout << "the greatest common denominator is: " << vv(x, y);
}
void root()
{
    float c;
    cout << "Enter the number: ";
    cin >> c;
    system("cls");
    if (c > 0)
        cout << "the aquare root is: " << sqrt(c);
    else
        cout << "c < 0";
}
int switc(int &r, int &k)
{
    int v = r;
    r = k;
    k = v;
}
void substitute()
{
    int nn, mm;
    cout << "Enter the nn: ";
    cin >> nn;
    system("cls");
    cout << "Einter the mm: ";
    cin >> mm;
    system("cls");

    cout << "nn=" << nn << "\nmm=" << mm;
}
void functions()
{
saif:
    cout << "\n======FUNCTIONS======\n";
    cout << "================================================================\n";
    cout << "1:To receive a number and collect even, odd, and prime numbers:\n";
    // لااستفبال عدد وجمع الاعداد الروجبه والفويه ولاوليه منه
    cout << "2:To find the greatest common divisor using recursion:\n";
    // لايحاد القاسم المشترك الاكبر با الستدعا الذاتي
    cout << "3:To find the root of any fractional number:\n";
    // لايجاد جذر اي عدد كسري
    cout << "4:To swap values between two variables using pass by reference:\n";
    // لاستبدال القيم بين متغيرين باستخدام الارسال بمرجع
    cout << "5:To return to the main menu\n";
    // للعوده للقائمة الرئسيه
    cout << "================================================================\n";
    cout << ":";
    cin >> gt;
    system("cls");
    switch (gt)
    {
    case 1:
    saif1:
        FF();
        cout << "\n==================================================\n";
        cout << "if yuo wamt to use the progeam ahain Enter :1\n";
        // لاستخدام البرنامج مره اخرا
        cout << "To go vacl enter :2\n";
        // للرجوع خطوه للخلف
        cout << "==================================================\n";
        cout << ":";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto saif1;
        if (gt == 2)
            goto saif;
        break;

    case 2:
    saif2:
        VV();
        cout << "\n==================================================\n";
        cout << "if yuo wamt to use the progeam ahain Enter :1\n";
        // لاستخدام البرنامج مره اخرا
        cout << "To go vacl enter :2\n";
        // للرجوع خطوه للخلف
        cout << "==================================================\n";
        cout << ":";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto saif2;
        if (gt == 2)
            goto saif;
        break;
    case 3:
    saif3:
        root();
        cout << "\n==================================================\n";
        cout << "if yuo wamt to use the progeam ahain Enter :1\n";
        // لاستخدام البرنامج مره اخرا
        cout << "To go vacl enter :2\n";
        // للرجوع خطوه للخلف
        cout << "==================================================\n";
        cout << ":";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto saif4;
        if (gt == 2)
            goto saif;
        break;
    case 4:
    saif4:
        substitute();
        cout << "\n==================================================\n";
        cout << "if yuo wamt to use the progeam ahain Enter :1\n";
        // لاستخدام البرنامج مره اخرا
        cout << "To go vacl enter :2\n";
        // للرجوع خطوه للخلف
        cout << "==================================================\n";
        cout << ":";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto saif4;
        if (gt == 2)
            goto saif;
    }
}
// الؤشرات
void pointers()
{

Ali:
    cout << "\n=========POINTERS=========\n";
    cout << "============================================================================================================\n";
    cout << "1:To sort the array elements using pointers. \n";
    // لادخال عصناصر المصفوفه وترتيبها تنازلي ثم طباعتها باستخدام المؤشرات
    cout << "2:To define a dynamic array, input values into it, then print it, and finally free the allocated memory.\n";
    // لتعريف مصفوفه ديناميكيه وادخال القيم اليها وطباعتها ثم تحرير المساحه المحجوزه
    cout << "3:To input a string using pointers.\n";
    // لادخال سلسله نصيه باستخدام المؤشرات
    cout << "4:To return to the main menu\n";
    // للعوده للقائمة الرئسيه
    cout << "============================================================================================================\n";
    cin >> gt;
    system("cls");
    switch (gt)
    {
    case 1:
    Ali1:
        // ادخال عصناصر المصفوفه وترتيبها تنازلي ثم طباعتها باستخدام المؤشرات

        cout << "\nEnter the 5 number: \n";
        int n[5];
        for (int *i = n; i < n + 5; i++)
        {
            cin >> *i;
        }
        for (int *i = n; i < n + 5; i++)
        {
            for (int *j = n; j < n + 5; j++)
            {
                if (*i > *j)
                {
                    int m = *j;
                    *j = *i;
                    *i = m;
                }
            }
        }
        system("cls");
        cout << "After modificateon:\n ";
        for (int *i = n; i < n + 5; i++)
            cout << *i << " ";

        cout << "\n==================================================\n";
        cout << "if yuo wamt to use the progeam ahain Enter :1\n";
        cout << "To go vacl enter :2\n";
        cout << "==================================================\n";
        cout << ":";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto Ali1;
        if (gt == 2)
            goto Ali;
        break;
    case 3:
    Ali3:
    {
        char zz[100];
        char *bb = zz;
        // ادخال سلسله نصيه باستخدام المؤشرات
        cin.ignore(); // لتجنب مشاكل الإدخال
        cout << "Enter text: ";
        cin.getline(bb, 100);
        system("cls");
        cout << "Entered text is: ";
        while (*bb != '\0')
        {
            cout << *bb;
            bb++;
        }

        cout << endl;
        cout << "\n==================================================\n";
        cout << "if yuo wamt to use the progeam ahain Enter :1\n";
        cout << "To go vacl enter :2\n";
        cout << "==================================================\n";
        cout << ":";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto Ali3;
        if (gt == 2)
            goto Ali;
    }
    break;
    case 2:
    Ali2:
        // تعريف مصفوفه ديناميكيه وادخال القيم اليها وطباعتها ثم تحرير المساحه المحجوزه
        cout << "\nEnter the array values:\n";
        int *kat = new int[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> kat[i];
        }
        system("cls");
        cout << "\nArray values: \n";
        for (int i = 0; i < 5; i++)
        {
            cout << kat[i] << " ";
        }
        delete[] kat;

        cout << "\n==================================================\n";
        cout << "if yuo wamt to use the progeam ahain Enter :1\n";
        cout << "To go vacl enter :2\n";
        cout << "==================================================\n";
        cout << ":";
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto Ali2;
        if (gt == 2)
            goto Ali;
        break;
    }
}
// التراكيب
void structures()
{
    struct kata
    {
        string name;
        int age;
        string Type;
        float Average;
        void Enter()
        {
            cout << "\nEnter the name : ";
            cin >> name;
            cout << "Enter hte age : ";
            cin >> age;
            cout << "Enter hte Type : ";
            cin >> Type;
            cout << "Enter hte Average : ";
            cin >> Average;
            system("cls");
        }
        void print(kata ob[7])
        {
            for (int i = 0; i < 7; i++)
            {
                int b = 1;
                for (int j = 0; j < 7; j++)
                {
                    if (ob[i].Average > ob[j].Average)
                    {
                        b++;
                    }
                }
                if (b == 7)
                {
                    cout << "\n=======================\n";
                    cout << "the name is: " << ob[i].name << endl;
                    cout << "the age is: " << ob[i].age << endl;
                    cout << "the Type is: " << ob[i].Type << endl;
                    cout << "hte Average is: " << ob[i].Average << endl;
                    cout << "=======================\n";
                }
            }
        }
    };
Yahya:
    cout << "\n======== COMPOSITIONS========\n";
    cout << "=================================================================================\n";
    cout << "1:To enter data for seven students (name, age, gender, GPA) using structures.\n";
    // لادخال بينات سبعه طلاب(الاسم-العمر-النوع-المعدل)باستخدام التراكيب
    cout << "2:To print the data of the student with the highest GPA.\n";
    // لطباعة بيانات الطالب الحاصل على اعلى معدل
    cout << "3:To return to the main menu\n";
    // للعوده للقائمة الرئسيه
    cout << "=================================================================================\n";
    kata ob[7];
    cin >> gt;
    system("cls");
    switch (gt)
    {
    case 1:
    Yahya1:
        for (int i = 0; i < 7; i++)
        {
            cout << "\n==================================\n";
            cout << "Enter the Student Information No:" << i + 1;
            ob[i].Enter();
            // ادخل معلومات الطلاب
        }
        cout << "\n===========================================================\n";
        cout << "To print the data of the student with the highest GPA :1\n";
        // لطباعه بيانات الطالب الحاصل على اعلا درجه
        cout << "if yuo wamt to use the progeam ahain Enter :2\n";
        // لاعاده ادخال البيانات
        cout << "To go vacl enter :3\n";
        // للوجوع خطوه للخلف
        cout << "\n===========================================================\n";
        cin >> gt;
        system("cls");
        if (gt == 1)
        {
            ob[2].print(ob);
            cout << "\nTo go vacl enter :1\n";
            cin >> gt;
            system("cls");
            if (gt == 1)
                goto Yahya;
        }
        if (gt == 2)
            goto Yahya1;
        if (gt == 3)
            goto Yahya;
        break;
    case 2:
        ob[2].print(ob);
        cout << "\nTo go vacl enter :1\n";
        // للرجوع خطوه للخلف
        cin >> gt;
        system("cls");
        if (gt == 1)
            goto Yahya;
        break;
    }
}

int main()
{
go:
    cout << "\n======MAIN MENU======\n";
    cout << "========================\n";
    cout << " \n1:For matrices\n";
    // للمصقوقات
    cout << " \n2:For functions\n";
    // للدوال
    cout << " \n3:For pointers\n";
    // للمؤشرات
    cout << " \n4:For compositions\n";
    // للتراكيب
    cout << "\n========================\n";
    cin >> gt;
    system("cls");
    switch (gt)
    {
    case 1:
        Array();

        if (gt == 3 || gt == 8)
        {
            goto go;
        }
        break;

    case 2:
        functions();
        if (gt == 5)
        {
            goto go;
        }
        break;

    case 3:
        pointers();

        if (gt == 4)
        {
            goto go;
        }
        break;

    case 4:
        structures();
        if (gt == 3)
        {
            goto go;
        }
        break;
    }

    return 0;
}