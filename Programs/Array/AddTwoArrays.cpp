#include <iostream>
using namespace std;

int main()
{
    int a[10] ,b[10];

    cout << "Enter first array: ";
    for(int i=0 ; i<10 ; i++)
        cin >> a[i];
    
    cout << "Enter second array: ";
    for(int i=0 ; i<10 ; i++)
        cin >> b[i];

    // چاپ کردن مجموع خانه های متناظر دو آرایه
    for(int i=0 ; i<10 ; i++)
        cout << a[i] + b[i] << "  ";

    cout << endl;
}   
