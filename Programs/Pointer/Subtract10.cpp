#include <iostream>
using namespace std;


int main()
{   
    float x;
    // x تعریف یک اشاره گر و ذخیره سازی آدرس متغیر
    float *m = &x;

    cout << "Enter m: ";
    cin >> *m;

    *m -= 10;

    cout << "m = " << *m << endl ;
}
