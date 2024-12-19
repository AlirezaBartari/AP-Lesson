#include <iostream>
#include <iomanip>
using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;

public:
    // سازنده پیش فرض
    Date()
    {
        cout << "Enter year , month and day : " ;
        cin >> year >> month >> day ;
    }
    // سازنده برای مقدار دهی اولیه
    Date(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    void Show();         // متد نمایش تاریخ
    int compare(Date);   // متد مقایسه آرگومان دریافتی با شی جاری
};

void Date::Show()
{   
        cout << setfill('0') //برای پر کردن فضای خالی با صفر
        << year  << "-" 
        << setw(2) << month << "-" 
        << setw(2) << day << endl;
}

int Date::compare(Date d)
{
    int daysInMonth, daysInYear = 0, daysInYear_d = 0;
    // محاسبه تعداد روز های سال جاری
    for(int i=1 ; i<month ; i++)
    {
        if(i > 0 && i <= 6)
            daysInMonth = 31;
        else if(i > 6 && i <= 11)
            daysInMonth = 30;
        else if(i == 12)
            daysInMonth = 29;
        
        daysInYear_d += daysInMonth;
    }
    daysInYear_d += d.day;

    // محاسبه تعداد روز های سال تاریخ دریافت شده
    for(int i=1 ; i<d.month ; i++)
    {
        if(i > 0 && i <= 6)
            daysInMonth = 31;
        else if(i > 6 && i <= 11)
            daysInMonth = 30;
        else if(i == 12)
            daysInMonth = 29;
        
        daysInYear += daysInMonth;
    }
    daysInYear += day;

    // مقایسه سال ها 
    if(year < d.year)
        return 1;
    else if(year > d.year)
        return -1;
    // اگر سال ها برابر بودند٬ تعدا روز های سال را مقایسه می کنیم
    if(daysInYear < daysInYear_d)
        return 1;
    else if(daysInYear > daysInYear_d)
        return -1;
    // اگر هیچ کدام از شرط ها برقرار نبودند ٬ تاریخ ها برابرند
    else
        return 0;
}
int main()
{
    Date d1(1403,10,20), d2;

    cout << "Current Date: " << d1.Show();
    
    int result = d1.compare(d2);
    cout << "result: " << result << endl;
}
