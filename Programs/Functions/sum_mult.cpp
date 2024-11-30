#include <iostream>
using namespace std ;

int calculate( int x, int y, int &mul)
{
    int sum = x + y ;
    mul = x * y ;

    return sum ;
}
int main(){

    int s, m , num1, num2 ;

    cout << "Enter two numbers : " ;
    cin >> num1 >> num2 ;

    s = calculate( num1 , num2 , m ) ;
    cout << "sum = " << s << endl
         << "mult = " << m << endl ;

}
