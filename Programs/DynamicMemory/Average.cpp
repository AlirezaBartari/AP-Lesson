#include <iostream>
using namespace std;

int main()
{
    // تخصیص حافظه پویا برای متغیر ها  
    int *num1 = new int;
    int *num2 = new int;
    float *sum = new float;
    float *av = new float;
    
    cout << "Enter num1 and num2: ";
    cin >> *num1 >> *num2;

    // محاسبه میانگین دو عدد
    *sum = *num1 + *num2;
    *av = (float)*sum / 2;

    cout << "Average: " << *av << endl;

    // آزادسازی حافظه تخصیص داده شده
    delete num1;
    delete num2;
    delete sum;
    delete av;
}
