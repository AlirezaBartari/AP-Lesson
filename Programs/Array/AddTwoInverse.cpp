#include <iostream>
using namespace std;

int main()
{
    int a[10] ,b[10]; 
    float sum, av;

    cout << "Enter first array: ";
    for(int i=0 ; i<10 ; i++)
        cin >> a[i];
    
    cout << "Enter second array: ";
    for(int i=0 ; i<10 ; i++)
        cin >> b[i];

    int i =0;  // شروع آرایه اول از اندیس صفر
    int j = 9; // شروع آرایه دوم از اندیس نه

    cout << "Result: ";
    while(i<10 && j>0) 
    {
        sum = a[i] + b[j];  // جمع کردن با متناظر وارون
        av = (float)sum / 2;  // بدست آوردن میانگین
        cout << av << "  ";
        j--; 
        i++;
    }
}   
