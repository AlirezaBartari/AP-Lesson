#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    
    ofstream mf;    // ofstream تعریف یک شی از کلاس  
    int stars = 1, n = 8;
    
    // ایجاد یک فایل جدید در صورت وجود نداشتن فایل با همین نام
    // و اضافه کردن محتویات جدید به فایل
    mf.open("folder\\Example.txt");

    //چک کردن اینکه فایل باز شده یا خیر
    if (!mf.is_open())
    {
        cout << "Error while opening file" << endl;
        return 1;
    }
    
    for(int i=0 ; i<n ; i++ )
    {   
        for(int j=0 ; j< n-i-1 ; j++) 
            mf << "   ";
        
        for(int j=0 ; j<stars ; j++)
            mf << " * ";
        
        mf << endl;    
        stars += 2; // برای افزایش تعداد ستاره ها در هر خط
    }
}   
