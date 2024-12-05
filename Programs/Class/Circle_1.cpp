#include <iostream>
using namespace std ;


class circle
{
private:
    float r ;
    
public:

    //  گرفتن شعاع از کاربر
    void GetR()
    {
        cout << "Enter r : " ;
        cin >> r ;
    }

    //  محاسبه و نمایش مساحت دایره
    void ShowMasahat()
    {
        cout << "Masahat = " << 3.14 * r * r ;
    }

    //  محاسبه و نمایش محیط دایره
    void ShowMohit()
    {
        cout << "Mohit = " << 2 * 3.14 * r ;
    }

};

int main()
{
    circle C1 ; // تعریف یک شی از کلاس دایره

    C1.GetR() ;

    C1.ShowMasahat() ;
    cout << endl ;

    C1.ShowMohit() ;
    cout << endl ;
}
