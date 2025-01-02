#include <iostream>
using namespace std;

// تابع بازگشتی برای جستجوی دودویی
bool Search(int arr[], int left, int right, int x) 
{
    if (right >= left) 
    {
        int mid = left + (right - left) / 2;

        // x اگر مقدار میانی برابر با 
        if (arr[mid] == x)
            return true;

        // x اگر مقدار میانی بزرگتر از 
        //باشد، در نیمه چپ جستجو می‌کنیم
        if (arr[mid] > x)
            return Search(arr, left, mid - 1, x);

        // در غیر این صورت، در نیمه راست جستجو می‌کنیم
        return Search(arr, mid + 1, right, x);
    }

    // اگر مقدار در آرایه پیدا نشد
    return false;
}

int main() 
{
    int n, x;

    cout << "How many numbers: ";
    cin >> n;
    int arr[n];

    cout << "Enter array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter number for searching: ";
    cin >> x;

    if (Search(arr, 0, n - 1, x))
        cout << " Found " << endl;
    else
        cout << " Not found " << endl;

}
