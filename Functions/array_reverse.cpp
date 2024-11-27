#include <iostream>
using namespace std ;

void reverse( int[] , int ) ;

int main(){

    int array[10] ;

    cout << "Enter 10 numbers : " ;
    for( int i=0 ; i<10 ; i++ )
        cin >> array[i] ;
        
    reverse(array , 10 ) ;

}

void reverse( int array[] , int len ){

    for(int i=len-1 ; i>=0 ; i-- )
        cout << array[i] << " " ;

    cout << endl ;
}
