#include <iostream>
using namespace std;

int main()
{
    int arr[10] , max1, max2;

    cout << "Enter first array: ";
    for(int i=0 ; i<10 ; i++)
        cin >> arr[i];
    
    max1 = arr[0];
    max2 = arr[0];

    for(int i=0 ; i<10 ; i++)
    {
        if(arr[i] > max1) 
        {
            max2 = max1;    // بزرگترین مقدار قبلی به دومین بزرگترین تبدیل می‌شود
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1)
            max2 = arr[i];  // عدد جاری دومین بزرگترین عدد است
    }
    cout << "Largest: " << max1 << endl
    << "Second Largest: " << max2 << endl;
}   
