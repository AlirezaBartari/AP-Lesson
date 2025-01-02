#include <iostream>
using namespace std;


int main()
{   
    // تعریف و مقدار دهی اولیه آرایه از اعداد اعشاری
    float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // تعریف یک اشاره گر با آدرس اولین عنصر آرایه
    float *p = arr;

    // دو برابر کردن هر عنصر آرایه
    for(int i=0 ; i<5 ; i++)
        p[i] *= 2;
    
    // چاپ عناصر آرایه
    for(int i=0 ; i<5 ; i++)
        cout << p[i] << "  ";
}
