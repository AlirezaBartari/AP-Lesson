#include <iostream>
using namespace std;


int main()
{
    float arr[10], av, max, sum = 0;

    cout << "Enter 10 numbers: ";
    // حلقه اول برای گرفتن ده عدد اعشاری
    for(int i=0 ; i<10 ; i++)
        cin >> arr[i];

    max = arr[0];
    for(int i=0 ; i<10 ; i++)
    {
        sum += arr[i];  // جمع کردن تمام مقادیر آرایه

        if(arr[i] > max)    // بررسی بزرگترین مقدار آرایه
        {
            max = arr[i];
        }    
    }
    av = (float)sum/10; // بدست آوردن میانگین

    cout << "Max: " << max << endl
    << "Average: " << av << endl;
}
