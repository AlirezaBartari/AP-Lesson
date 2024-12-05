#include <iostream>
using namespace std;

class circle 
{
private:
    float r ;

public:
    //گرفتن شعاع از کاربر
    void GetR() 
    {
        cout << "Enter r: " ;
        cin >> r ;
    }
    //محاسبه مساحت دایره
    float Masahat()
    {
        return 3.14 * r * r ;
    }
};

int main() 
{
    circle C1 , C2 ; //تعریف دو شی از کلاس دایره

    C1.GetR() ; 
    C2.GetR() ;

    if (C1. Masahat() > C2. Masahat())
        cout << "C1" ;

    else if (C2. Masahat() > C1. Masahat())
        cout << "C2" ;

    else
        cout << "equal" ;
}
