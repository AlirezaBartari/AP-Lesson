#include <iostream>
using namespace std ; 

float power(float , int ) ;

int main(){

    int x ;
    float num , result ;
    
    cout << "Enter num , x : " ;
    cin >> num >> x ;

    result = power( num , x ) ;
    cout << "power of "<< num << " and " << x << " is : " << result << endl ;
}

float power( float num , int x ){
    
    if(x == 1 )
        return num ;

    return (float)power(num , x-1 )* num ;
}
