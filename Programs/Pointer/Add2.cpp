#include <iostream>
using namespace std;


int main()
{   
    int arr[3];
    // تعریف یک اشاره گر با آدرس اولین خانه آرایه
    int *p = arr;

    cout << "Enter array: ";
    for(int i=0 ; i<3 ; i++)
        cin >> p[i];
    
    // اضافه کردن دو واحد به تمام عناصر آرایه
    for(int i=0 ; i<3 ; i++)
        p[i] += 2;

    for(int i=0 ; i<3 ; i++)
        cout << p[i] << "  ";
}
