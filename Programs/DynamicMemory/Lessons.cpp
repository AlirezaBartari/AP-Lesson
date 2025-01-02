#include <iostream>
using namespace std;

int main() 
{
    int num;  // تعداد درس ها
    float sum = 0, average;

    cout << "Enter number of lessons : ";
    cin >> num;

    // تخصیص حافضه پویا برای آرایه
    float *grades = new float[num];
    
    // گرفتن نمرات از کاربر و محاسبه مجموع نمرات
    for (int i = 0; i < num; i++) 
    {
        cout << "Enter the grades of lesson " << i + 1 << ": ";
        cin >> grades[i];

        sum += grades[i];
    }

    average = (float)sum / num;
    cout << endl << "student grade point average: " << average << "\n\n";

    // آزاد سازی حافظه تخصیص داده شده
    delete[] grades;
}
