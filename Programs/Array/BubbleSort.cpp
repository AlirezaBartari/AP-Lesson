#include <iostream>
using namespace std ;

int main(){

    int arr[10] , temp;
    bool swapped ;   // متغیری برای بررسی اینکه آیا در دور جاری، جابه‌جایی رخ داده است یا خیر

    cout << "Ener numbers : " ;
    for( int i=0 ; i<10 ; i++ )
        cin >> arr[i] ;

    // الگوریتم مرتب سازی حبابی
    for(int i=0 ; i< 10-1 ; i++)   // (n-1) :تعداد دور های الگوریتم 
    {   
        swapped = false ;   // در ابتدای هر دور فرض می‌شود هیچ جابه‌جایی انجام نشده

        for(int j=0 ; j< 10 - i -1 ; j++)
        {
            if(arr[j] > arr[j+1])   // اگر عنصر جاری بزرگتر از عنصر بعدی باشد
            {
                // جابه جایی صورت میگیرد
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swapped = true ;
            }
        }
        // اگر هیچ جابه جایی انجام نشده باشد٬ آرایه مرتب است و از حلقه خارج میشود
        if(!swapped)
            break;
    }
    cout << "sorted array : " ;
    for(int i=0 ; i<10 ; i++ )
        cout << arr[i] << "  ";

    cout << endl ;
}
