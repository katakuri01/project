#include <iostream>
#include <string>
using namespace std;
int main()
{
kata1:      // يقوم بقل المستخدم من البرنامج المستخدم الى القائمة الرئيسية
    int x1; // متغيرالذ نعرف بخ السوتش
    // اذا اردت اختبار برنامج من البرامج التالية  اضغط الرقم من امام البرنامج المراد الوصول الية
    //(switch)جميع البرامج التالية مرتبطة بدالة
    cout << "1: reads a number entered by the user and ther prints whether the number is (negative or positive && even or odd)" << endl;
    cout << "2: that reads four values entered  the user, then arranges the in ascending order and prints them" << endl;
    cout << "3: prints the multiplication table (1-12)for any number entered by the user" << endl;
    cout << "4: prints the Fibonacci series" << endl;
    cout << "5: prints the following string (1 2 3 4 , 2 4 6 8 , 3 6 9 12)" << endl;
    cout << "6: prints the ASCll Code individually for to, including the following(capital letters, small letters,numbers )included witheng one operation" << endl;
    cout << "7: calculates the result and remainder of the division of two input numbers without using the division operation" << endl;
    cout << "8: finds the greatest common divisor of two input numbers and prints it" << endl;
    cout << "9: receives the number of seconds from the user and then converts if to the following time format(s:m:h)and prints it" << endl;
    cout << "10: converts a decimal number entered by the user into a binaray number" << endl;
    cout << "11: converts the first letter in each word into a large letter in a text string" << endl;
    cout << "12: receives a character entered by the user then converts the entered character r from capital to small or vice versa, vernsa prints if" << endl;
    cout << "13: reads number entered by the user, then reverses the number and prints it (example:123 <- 321) in addition to printing the number of its digits and their sum" << endl;
    cout << "14: prints the numbers [100-1]that are divisible by the number (3):14" << endl;
    cout << "15: prints prime numbers [100-1]:15" << endl;
    cout << "16: defines a single array with a size [7]elements enters values into if, then arranges them in descending order and prints them" << endl;
    cout << "17: defines two single matrix with size{5}elements for each array, enters values into them, then collects them into a third array in ascending order and prints it" << endl;
    cout << "18: defines a single array with a size of [8]elements,enters values in go it, then finds the third smallest value within the array and prints it" << endl;
    cout << "19: defines a binary array with size [3]elements for rows and columns enters values for this array and then finds the largest and smallest value in the array" << endl;
    cout << "20: defines a binary matrix with a size of [5]items to rows and columns, and inserts values foe this matrix,then prints the main and secondary diameter elements" << endl;
    cin >> x1;
    // لتجميع البرامج داخلعا(switch)عرفنا دالة ال
    switch (x1)
    {
    case 1:
    {
        int x;
    kata2: // لتنقل
        // نطلب من المستخدم ادخال القيم
        cout << " Enter the number: ";
        cin >> x;
        if (x != 0)
        {
            // لتحديد  إشاره العدد واذا كان زوجياً او فردياً(if - else)نستخدم الشرط
            if (x > 0)
            {
                cout << " The number is Positive ";
                if (x % 2 == 0)
                    cout << " and even." << endl;
                else
                    cout << "and odd" << endl;
            }
            else
            {
                cout << "The number is Negative ";
                if (x % 2 == 0)
                    cout << " and even" << endl;
                else
                    cout << "and odd" << endl;
            }
        }
        else
            cout << "error" << endl;
        int y;
        cout << " Re the program again: 1" << endl;
        cout << " return to the main menu: 2" << endl;
        cin >> y;
        if (y == 2)
            goto kata1; // يعيد البرنامج من جديد للمستخدم
        if (y == 1)
            goto kata2; // ينقل المستخدم الى القائمة الرئيسية
    }
    break;
        {
        case 2:
        kata3:
            int y;

            int ww[4];                            // مصفوفه لتخزين اربع قيم
            cout << "Enter four numbers" << endl; // نطلب من المستخدم ادخال القيم
            for (int i = 0; i < 4; i++)
            {
                cin >> ww[i];
            }
            cout << "\n"
                 << endl; // ترتيب القيم
            for (int i = 0; i < 4; i++)
            {
                for (int g = 0; g < 3; g++)
                {
                    if (ww[g] > ww[g + 1])
                    { // تبادل القيم
                        int y = ww[g + 1];
                        ww[g + 1] = ww[g];
                        ww[g] = y;
                    }
                }
            } // الطباعة
            cout << " Settings after modification " << endl;
            for (int i = 0; i < 4; i++)
            {
                cout << ww[i] << " ";
            }
            cout << "\n Re the  program again: 1 " << endl;
            cout << " return to the main menu: 2 " << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata3;
        }
        break;
        {
        case 3:
        kata4:
            int x, y;
            cout << "Enter number: ";
            cin >> x;
            // لطباعة جدول الضرب(for)نستخدم حلقة ال
            for (int i = 1; i <= 12; i++)
            {
                // عملية الطباعة
                cout << x << "*" << i << "=" << x * i << endl;
            }
            cout << "\n Re the program again: 1 " << endl;
            cout << " return to the main menu: 2 " << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata4;
        }
        break;
        {
        case 4:
        kata5:

            int x = 0, y, l = 0;
            cout << " Fibonacci series point " << endl;
            for (int i = 0; i < 13; i++) // يدخل القيم
            {
                cout << x << " ";
                // تبادل القيم
                y = l;
                l = x;
                if (x == 0)
                {
                    x++;
                }
                x = x + y;
            }
            cout << "\n\nRe the program again: 1 " << endl;
            cout << " return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata5;
        }
        break;
        {
        case 5:
        kata6:

            int x = 1, y; // نعرف متغيرين
            cout << " print the series " << endl;
            for (int i = x; i <= 4; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
            for (int i = x + 1; i <= 8;)
            {
                cout << i << " ";
                i++;
                i++;
            }
            cout << "" << endl;
            for (int i = x + 2; i <= 12; i++)
            {
                cout << i << " ";
                i++;
                i++;
            }
            cout << "\nRe the program again: 1 " << endl;
            cout << " return to the main menu: 2 " << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata6;
        }
        break;
        {
        case 6:
        kata7:
            int y;
            int gg;
            cout << " if you want capital letters,Enter: 1\n if you small letters, Enter: 2\n if you want numbers, Enter: 3 " << endl;
            cin >> gg;
            if (gg == 1)                        //  وسوف يعرض لك الاحرف الكبتل(1) ادخل الرقم
                for (char i = 65; i <= 90; i++) // بين(65 - 90) الاحرف الكبتل
                {
                    cout << i << "  ";
                }
            if (gg == 2)
                for (char i = 97; i <= 122; i++) // ومن(97 - 122) الاحرف الاسمول
                {
                    cout << i << "  ";
                }
            if (gg == 3)
                for (char i = 48; i <= 57; i++) // ومن(48 - 57) الارقام الموجوده على الكيبورد
                {
                    cout << i << "  ";
                }
            cout << "\n Re the program again: 1 " << endl;
            cout << " return to the main menu: 2 " << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata7;
        }
        break;
        {
        case 7:
        kata8:
            int x, c, y, d = 0;
            cout << "Enter the number1 : ";
            cin >> x;
            cout << "Enter the number2 : ";
            cin >> c;
            // تحقق من ان المقسوم علية ليس  صفراً لتجنب القسمة على الصفر
            if (c == 0)
            {
                cout << "it is not divisible by 0" << endl;
                return 1;
            }
            // استخدم الطرح المتكرر لحساب الناتج والباقي
            y = x;
            while (y >= c)
            {
                y -= c;
                d++;
            }
            cout << "the result of the division : " << d << endl;
            cout << "the rest of the division : " << y << endl;
            cout << "\nRe the program again: 1" << endl;
            cout << " return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata8;
        }
        break;
        {
        case 8:
        kata9:
            int y;
            int number1, number2;
            cout << " Enter the number 1: ";
            cin >> number1;
            cout << " Enter the number 2: ";
            cin >> number2;
            // حالة القاعده اذا كان احد العددين صفرفان القاسم المشترك الاكبر هو العدد الاخر
            if (number1 == 0)
            {
                cout << " This is the common denominator: " << number2 << endl;
                return 1;
            }
            if (number2 == 0)
            {
                cout << " This is the common denominator: " << number1 << endl;
                return 1;
            }

            for (int i = 1; i <= i; i++)
            {
                if (i % number1 == 0)
                {
                    if (i % number2 == 0)
                    {
                        cout << " This is the common denominator: ";
                        cout << i << endl;
                        break;
                    }
                }
            }
            cout << "\n Re the program again: 1 " << endl;
            cout << " return to the main menu: 2 " << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata9;
        }
        break;
        {
        case 9:
        kata10:
            int y;
            int seconds1, hours, minutes, seconds2;
            cout << " Enter the number of seconds: ";
            cin >> seconds1;
            seconds2 = seconds1 % 60; // حساب الثانية
            minutes = seconds1 / 60;  // حساب الدقائق
            hours = seconds1 / 3600;  // حساب الساعات
            cout << "Time is : ";
            // طباعة النتيجة بصيغة (الساعات:الثواني:الدقائق)كما هو موضح
            cout << "(" << hours << ":" << minutes << ":" << seconds2 << ")" << endl;
            cout << "\n Re the program again: 1" << endl;
            cout << "To return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata10;
        }
        break;
        {
        case 10:
        kata11:
            int x, y = 0; // نعرف متغيرين
            cout << " Enter the number: ";
            cin >> x;
            int ff[x]; // نعرف مصفوفة بحجم اول متغير : يكون سعتها بقيمة المتغير
            while (x != 0)
            { // نستخدم القسمة وباقي القسمةعلى(2)من اجل يطلع العدد الثنائي
                ff[y] = x % 2;
                x = x / 2;
                y++;
            }
            cout << " the number is binary: "; // نطبع الرقم الثنائي من باقي القسمةبترتيب صحيح
            for (int i = y - 1; i >= 0; i--)
            {
                cout << ff[i];
            }
            cout << "\nRe the program again : 1" << endl;
            cout << " return to the main menu : 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata11;
        }
        break;
        {
        case 11:
        kata12:
            int y;
            string text;
            cout << " Enter text: ";
            cin >> text;

            if (text[0] >= 'a' && text[0] <= 'z')
            {
                text[0] = text[0] - 32;
            }
            cout << " Text after modification : " << text << endl;
            cout << "\nRe the program again : 1" << endl;
            cout << " return to the main menu : 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata12;
        }
        break;
        {
        case 12:
        kata13:
            int y;
            char x;
            cout << " Enter a letter:  ";
            cin >> x;
            // التحقق اذا كان الحرف حرفاً ابجدياً(انجليزياً)فقط
            if (x >= 65 && x <= 90)
            {
                x = x + 32; // اذاكان الحرف كبير نحولة الى حرف كبير
                cout << " the letter after modification : " << x << endl;
            }
            else if (x >= 79 && x <= 122)
            {
                x = x - 32;
                cout << "the letter after modification :" << x << endl;
            }

            cout << "\nRe the program again : 1" << endl;
            cout << " return to the main menu : 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata13;
        }
        break;
        {
        case 13:
        kata14:
            int x, y = 0, d = 0, z = 0;
            cout << " Enter number: ";
            cin >> x;
            // حفظ القيمة الاصلية للعدد لاستخدامها في حساب عدد الخانات
            while (x != 0)
            {
                int m = x % 10; // الحصول على الرقم الاخير
                y = y * 10 + m; // إضافةالرقم الاخيرإلى الرقم المعكوس
                // ازلة الرقم الاخير من العدد الاصلي
                x /= 10;
                d++;
                z += m;
            }
            cout << " The number is reversed: " << y << endl; // العدد المعكوس
            cout << " Number of boxes: " << d << endl;        // عدد الخانات
            cout << " collection of digits: " << z << endl;   // مجموع الاعداد
            cout << "\n Re the program again: 1" << endl;
            cout << " return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata14;
        }
        break;
        {
        case 14:
        kata15:
            int y;
            cout << "preparation" << endl;
            for (int i = 0; i <= 100; i++) // لتكرار العملية من  1 الى  100 (for)حلقة
            {
                if (i % 3 == 0)
                    cout << i << endl;
            }
            cout << "\n Re the program again: 1" << endl;
            cout << " return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata15;
        }
        break;
        {
        case 15:
        kata16:

            int x = 100, y;
            cout << " preparation" << endl;
            cout << " the first numbers is: " << endl;
            for (int i = x; i >= 1; i--)
            {
                int y = 0;
                for (int g = 2; g < i; g++)
                {
                    if (i % g == 0) // اي عدد يقبل القسمة على اي عدد  غير ال1 ونفسة فهو ليس اولياً
                        y++;
                }
                if (y == 0)
                    cout << i << endl;
            }
            cout << "\nRe the program again: 1" << endl;
            cout << "return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata16;
        }
        break;
        {
        case 16:
        kata17:
            int y;
            int ss[7];                        // نعرف  بحجم 7 عناصر
            cout << "Enter 7 values" << endl; // ادخل القيم الى المصفوفة
            for (int i = 0; i < 7; i++)
            {
                cin >> ss[i];
            }
            for (int i = 0; i < 7; i++)
            {
                for (int g = 0; g < 6; g++)
                {
                    if (ss[g] < ss[g + 1])
                    {
                        int y = ss[g + 1];
                        ss[g + 1] = ss[g];
                        ss[g] = y;
                    }
                }
            } // طباععة المصفوفة المرتبة
            cout << "The values are in descending order" << endl;
            for (int i = 0; i < 7; i++)
                cout << ss[i] << " ";
            cout << "\nRe the program again: 1" << endl;
            cout << " return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata17;
        }
        break;
        {
        case 17:
        kata18:
            int y;
            int ss[5], ee[5], sem[5]; // تعرف ثالث مصفوفات وكلاهما بحجم 5 عناصر
            cout << " Enter the elements of the first matrix " << endl;
            for (int i = 0; i < 5; i++) // ادخل قيم المصفوفة الاولى
            {
                cin >> ss[i];
            }
            cout << " Enter the elements of the second matrix " << endl;
            for (int i = 0; i < 5; i++) // ادخل قيم المصفوفه الثانية
            {
                cin >> ee[i];
            }
            for (int i = 0; i < 5; i++)
            {
                // جمع المصفوفتين وواوجد المصفوفه الثالثه
                sem[i] = ss[i] + ee[i];
            }
            for (int i = 0; i < 5; i++)
            {
                for (int g = 0; g < 4; g++)
                {
                    // الترتيب تصاعديا
                    if (sem[g] < sem[g + 1])
                    { // تبادل القيم
                        int y = sem[g + 1];
                        sem[g + 1] = sem[g];
                        sem[g] = y;
                    }
                }
            } // الطباعة
            cout << " After modification: " << endl;
            for (int i = 0; i < 5; i++)
                cout << sem[i] << " ";
            cout << "\nRe the program again: 1" << endl;
            cout << " return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata18;
        }
        break;
        {
        case 18:
        kata19:
            int y;
            int ff[8], m = 2;                 // تعريف مصفوفه بحجم 8عناصر
            cout << "Enter 8 values" << endl; // ادخل قيم المصفوفه
            for (int i = 0; i < 8; i++)
            {
                cin >> ff[i];
            }
            for (int i = 0; i < 8; i++)
            {
                for (int g = 0; g - 1 < 8; g++)
                {
                    if (ff[g] > ff[g + 1])
                    {
                        int y = ff[g + 1]; // تبادل القيم
                        ff[g + 1] = ff[g];
                        ff[g] = y;
                    }
                }
            }
            cout << " Third, the smallest value " << endl;
            cout << ff[m];
            cout << "\n Re the program agai: 1" << endl;
            cout << " return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata19;
        }
        break;
        {
        case 19:
        kata20:
            int y;
            int row = 3, cols = 3; 
            int aAa[row][cols];
            cout << "Enter the 9 number" << endl; 
            for (int i = 0; i < row; i++)
            {
                for (int g = 0; g < cols; g++)
                {
                    cin >> aAa[i][g];
                }
            }
            int larger = aAa[0][0];
            for (int i = 0; i < row; i++)
            {
                for (int w = 0; w < cols; w++)
                {
                    if (larger < aAa[i][w])
                        larger = aAa[i][w];
                }
            }
            int younger = aAa[0][0];
            for (int i = 0; i < row; i++)
            {
                for (int w = 0; w < cols; w++)
                {
                    if (younger > aAa[i][w])
                        younger = aAa[i][w];
                }
            } // الطباعة
            cout << " The largest value: " << larger;
            cout << "\n The smallest value: " << younger;
            cout << "\nRe the program again: 1" << endl;
            cout << " return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata20;
        }
        break;
        {
        case 20:
        kata21:
            int y;
            /*تعريف مصفوفه بحجم 5*5 عناصر*/
            int row = 5, cols = 5; // تعريف مصفوفه بحجم 5*5 عناصر
            int aAa[row][cols];
            cout << "Enter the values of the halves:" << endl;
            for (int i = 0; i < row; i++)
            {
                for (int g = 0; g < cols; g++)
                {
                    cin >> aAa[i][g];
                }
            } // طباعة القطرالرئيسي
            cout << " Vertical diameter: " << endl;
            for (int i = 0; i < row; i++)
            {
                for (int g = 0; g < 1; g++)
                {
                    cout << aAa[i][g + i] << " ";
                }
            } // طباعة عناصر القطر الرئيسي
            cout << "\nSecondary diameter:" << endl;
            for (int i = 0; i < row; i++)
            {
                for (int g = cols; g <= cols; g++)
                {
                    cout << aAa[i][g - i - 1] << " ";
                }
            }
            cout << "\nRe the program again: 1" << endl;
            cout << " return to the main menu: 2" << endl;
            cin >> y;
            if (y == 2)
                goto kata1;
            if (y == 1)
                goto kata21;
        }
        break;
        {
            int y;
        default:
            cout << "error" << endl;
            cout << "return to the main menu: 1" << endl;
            cin >> y;
            if (y == 1)
                goto kata1;
        }
    }

    return 0;
}
