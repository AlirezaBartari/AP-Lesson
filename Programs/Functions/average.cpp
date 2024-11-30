#include <iostream>
using namespace std ;

float av(float x , float y)
{
    float av = (x+y) / 2  ;
    return av ;
}

int main(){
    
    float num1 , num2 ;

    cout << "Enter two numbers : " ;
    cin >> num1 >> num2 ;

    cout << av(num1, num2) << endl ;

}
