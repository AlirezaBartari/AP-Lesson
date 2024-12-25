#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    ifstream mf;
    string name , family;
    int av, high = 0;

    // باز کردن فایل
    mf.open("c:\\folder\\Example.txt");

    // چک کردن اینکه فایل باز شده یا خیر
    if(!mf.is_open())
    {
        cout << "error oppening file " << endl;
        return 1;
    }
    // خواندن داده ها از فایل و چاپ کردن آنها در ترمینال
    while(mf >> name >> family >> av)
    {   
        cout << setw(10) << left << name 
        << setw (10) << left << family 
        << av << endl;
        
        // بررسی بالاترین معدل
        if(av > high)
            high = av;
    }
    
    cout << endl << "Highest grade average: " << high << endl;

    mf.close();   // بستن فایل
}
