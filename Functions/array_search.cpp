#include <iostream>
using namespace std ;

float search( float[] , float , int ) ;

int main(){

    float array[10] , num ;
    int pos ;
    
    cout << "Enter 10 numbers : " ;

    for(int i=0 ; i<10 ; i++)
        cin >> array[i] ;

    cout << "Enter your num for searching : " ;
    cin >> num ;

    pos = search(array, num , 10) ;
    cout << "position : " << pos << endl ;

}

float search(float array[] , float num , int len )
{
    int p = -1 ;

    for(int i=0 ; i<len ; i++)
        if(num == array[i])
        {
            p = i ;
            break ;
        }

    return p ;
}   
