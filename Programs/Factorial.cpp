#include <iostream>
using namespace std ;

long int fact(int num ) 
{
    long int f = 1 ;
    
    for(int i=1 ; i <= num ; i++ )
        f *= i ;
    
    return f ;
}

int main(){

    int number ;
    cout << "Enter number : " ;
    cin >> number ;

    cout << "Factorial = " << fact( number ) << endl ;

}
