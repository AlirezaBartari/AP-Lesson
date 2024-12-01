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
    cout << "sin (" << degree << ") = " << sin << endl ;
    
    return 0 ;
}

float sin_calc( float degree ){

    // کاهش زاویه به محدوده [0, 360]
    while (degree >= 360) {
        degree -= 360;
    }
    while (degree < 0) {
        degree += 360;
    }

    // تبدیل درجه به رادیان
    float rad = degree * ( M_PI / 180 ) ;
    int sign = 1 ; // برای تعیین علامت جملات
    float calc = rad ;

    // محاسبه سری تیلور
    for(float i=3 ; i<=11 ; i+=2 )
    {   
        sign *= -1 ;
        calc += (float)(sign*( power(rad , i) / fact( i ) )) ;
    }
    
    return calc ;
}
// محاسبه فاکتوریل
float fact( int n ){

    int f = 1 ;
    for( int i=1 ; i<= n ; i++ )
        f *= i ;
    
    return f ;
}
// محاسبه توان
long double power( float x , float n ){

    long double pow = 1  ;
    for( int i=0 ; i<n ; i++ )
        pow *= x ;
    
    return pow ;
}
