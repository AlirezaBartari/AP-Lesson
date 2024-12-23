#include <iostream>
#include <iomanip>
using namespace std;

class Date
{   
    // تعریف توابع دوست
    friend istream& operator>>(istream &in , Date &d); 
    friend ostream& operator<<(ostream &out , Date d);

private:
    int year;
    int month;
    int day;

public:
    // سازنده پیش فرض
    Date()
    {
        year = 1300;
        month = 1;
        day = 1;
    }
};

ostream& operator<<(ostream &out , Date d)
{
    out << setfill('0')
    << d.year << "-"
    << setw(2) << d.month << "-"
    << setw(2) << d.day << endl;

    return out;
}

istream& operator>>(istream &in , Date& d)
{   
    cout << "Enter year , month and day: ";
    in >> d.year >> d.month >> d.day;

    return in;
}

int main()
{
    Date d;

    cin >> d;
    cout << d;
}
