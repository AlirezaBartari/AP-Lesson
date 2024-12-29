#include <iostream>
using namespace std;


int main()
{
    int arr[10], n = 0;

    cout << "Enter 10 numbers: ";
    // حلقه اول برای گرفتن ده عدد صحیح
    for(int i=0 ; i<10 ; i++)
        cin >> arr[i];
    // حلقه دوم برای پیدا کردن اعداد مضرب ۳
    for(int i=0 ; i<10 ; i++)
        if(arr[i]%3 == 0 )     // چک کردن باقیمانده هر عدد در تقسیم بر ۳
            n++;
    
    cout << "tedad mazrab 3: " << n << endl;
}
