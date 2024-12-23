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
    // (==) سربارگذاری عملگر 
    bool operator==(Date d)    
    {
        return((year == d.year) && (month == d.month) && (day == d.day));
    }
};

int main()
{
    Date d1, d2;

    if(d1 == d2)
        cout << "equal" << endl;
    else 
        cout << "not equal" << endl;
}
