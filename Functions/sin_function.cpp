#include <iostream>
using namespace std ;

float sin_calc( float ) ;
float fact( int ) ;
long double power( float , float ) ;

int main(){

    float degree ;
    
    cout << "Enter angle : " ;
    cin >> degree ;
    
    float sin = sin_calc( degree ) ;
    cout << "sin " << degree << " = " << sin << endl ;
    //cout << power(1.57,11) ;
    return 0 ;
}

float sin_calc( float degree ){
    
    float rad = degree * 0.01745329 ; // or *3.14/180 
    int sign = 1 ;
    float calc = rad ;
    
    for(float i=3 ; i<=11 ; i+=2 )
    {   
        sign *= -1 ;
        calc += (float)(sign*( power(rad , i) / fact( i ) )) ;
    }
    return calc ;
}

float fact( int n ){

    int f = 1 ;
    for( int i=1 ; i<= n ; i++ )
        f *= i ;
    
    return f ;
}

long double power( float x , float n ){

    long double pow = 1  ;
    for( int i=0 ; i<n ; i++ )
        pow *= x ;
    
    return pow ;
}
