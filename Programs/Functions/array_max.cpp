#include <iostream>
using namespace std ;

int max( int[] , int ) ;

int main(){
    
    int arr[10] ;

    cout << "Enter 10 numbers : " ;
    
    for(int i=0 ; i<10 ; i++)
        cin >> arr[i] ;

    int maximum = max( arr , 10) ;
    
    cout << "max = " << maximum << endl ;

}

int max( int array[] , int len )
{
    int max = array[0] ;

    for(int i=0 ; i<len ; i++ )
        if(max < array[i])
            max = array[i] ;

    return max ;
}
