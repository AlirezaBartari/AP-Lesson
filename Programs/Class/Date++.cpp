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
        cout << "Enter year , month and day: ";
        cin >> year >> month >> day;
    }
    // متد نمایش تاریخ
    void Show()
    {
        cout << setfill('0') 
        << year << "-"
        << setw(2) << month << "-"
        << setw(2) << day << endl;
    }
    // (++) سربارگذاری عملگر
    void operator++(int)
    {
        int daysInMonth;

        // تعیین تعداد روز های هر ماه
        if(month <= 6 && month > 0)
            daysInMonth = 31;

        else if(month <= 11 && month > 6)
            daysInMonth = 30;

        else if(month == 12)
            daysInMonth = 29;
        
        else{
            cout << "Invalid Date!" << endl;
            return;
        }
        // بررسی درست بودن روز های تاریخ وارد شده
        if(day > daysInMonth){
            cout << "Invalid Date!" << endl;
            return;
        }
        day++;
        // اگر متغیر روز ٬ از تعداد روز های ماه بیشتر شود 
        if(day > daysInMonth)
        {
            month++;    
            day = 1;    
            
            if(month > 12){   
                year++;       
                month = 1;    
            }
        }
    }
};

int main()
{
    Date d;

    d++;
    d.Show();
}