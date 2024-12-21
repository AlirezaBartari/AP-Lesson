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
    // سازنده آرگومان دار ٬ برای مقدار دهی اولیه
    Date(int y, int m, int d)
    {
        day = d;
        month = m;
        year = y;
    }
    // متد برای مقایسه کردن دو تاریخ
    bool compare(Date d)
    {
        return((year == d.year) && (month == d.month) && (day == d.day));
    }
};

int main()
{
    Date d1(1403,12,20),d2;

    bool result = d1.compare(d2);  //حاصل مقایسه تاریخ شی جاری با تاریخ شی دریافتی 

    if(result)
        cout << "   True    " << endl;
    else
        cout << "   False   " << endl;
}
