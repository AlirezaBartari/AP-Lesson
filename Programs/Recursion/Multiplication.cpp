#include <iostream>
using namespace std ;

// تابع بازگشتی برای محاسبه ضرب دو عدد
int mult(int n1 , int n2 ){
    
    if( n2 == 0 ) 
        return n2 ;
    
    return mult(  n1 , n2-1 ) + n1 ;
}

int main(){

    int num1 , num2 ;
    cout << "Enter two numbers : " ;
    cin >> num1 >> num2 ;

    cout << "multiplication  : " << mult(num1, num2) << endl ;

}
