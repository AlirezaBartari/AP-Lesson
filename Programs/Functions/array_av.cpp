#include <iostream>
using namespace std ;

float average(int[] , int) ;

int main(){

    int array[10] ;

    for(int i=0 ; i<10 ; i++ ) 
        cin >> array[i] ;
    
    int av = average(array , 10 ) ;
    cout << "average : " << av << endl ;

}

float average( int array[] , int len ) 
{
    float sum = 0 ;

    for(int i =0 ; i<len ; i++ ) 
        sum += array[i] ;

    return (float)(sum/10) ;
}
