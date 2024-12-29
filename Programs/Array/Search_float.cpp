#include <iostream>
using namespace std;


int main()
{
    float arr[10], num;

    cout << "Enter 10 numbers: ";
    // حلقه اول برای گرفتن ده عدد اعشاری
    for(int i=0 ; i<10 ; i++)
        cin >> arr[i];

    cout << "Enter number for searching: "; 
    cin >> num;     // دریافت یک عدد برای جستجو در آرایه

    for(int i=0 ; i<10 ; i++)
        if(arr[i] == num)
        {
            cout << "found" << endl;
            return 0;   // اگر عدد پیدا شود برنامه خاتمه می یابد
        }    
    // .بعد از پیمایش تمام عناصر آرایه اگر عدد پیدا نشد
    // پیام زیر نمایش داده می شود
    cout << "not found" << endl; 
}
