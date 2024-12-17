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
    // متد نمایش تاریخ 
    void Show();
    // متدی برای بررسی و محاسبه روز بعد
    bool NextDay();
    
};

void Date::Show()
{   
        cout << setfill('0') //برای پر کردن فضای خالی با صفر
        << year  << "-" 
        << setw(2) << month << "-" 
        << setw(2) << day << endl;
}
bool Date::NextDay(){
        int daysInMonth;

        // تعیین تعداد روز های هر ماه
        if(month <= 6 && month > 0)
            daysInMonth = 31;

        if(month <= 11 && month > 6)
            daysInMonth = 30;

        if(month == 12)
            daysInMonth = 29;

        else
            return false;
        
        // بررسی درست بودن روز های تاریخ وارد شده 
        if(day > daysInMonth)
            return false;

        day++;
        // اگر متغیر روز از تعداد روز های ماه بیشتر شود 
        if(day > daysInMonth){
            month++;    
            day = 1;    
            
            if(month > 12){   
                year++;       
                month = 1;    
            }
        }
        return true;    // در صورت صحیح بودن تاریخ
}

int main()
{
    Date date;
    
    if(date.NextDay()) 
        date.Show();
    
    else
        cout << "Invalid Date!" << endl;

    return 0;
}
