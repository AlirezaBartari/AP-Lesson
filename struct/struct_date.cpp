#include <iostream>
using namespace std ;

struct date 
{
    int day ;
    int month ;
    int year ;
};

int main(){
    
    date d ;
    cout << "Enter day , month , year : " ;
    cin >> d.day >> d.month >> d.year ;

    if(d.month <= 6 )
    {
        float n = ((d.month-1) * 31) + d.day ;
        n ++ ;
      
        if(d.day > 32){
            cout << "\" The date is invalid ! \"" ;
            return 0 ;
        }
        d.month = ceil(n/31); 
        d.day ++ ;
        
        if(d.day > 31)
            d.day = 1 ; 
    }
    else if(d.month > 6 & d.month <= 12)
    {
        float n = ((d.month-7) * 30) + d.day ;
        n ++ ;
        d.month = ceil(n/30) + 6 ;
        d.day ++ ;

        if(d.day > 31){
            cout << "\" The date is invalid ! \"" << endl ;
            return 0 ;
        }
        if(d.day > 30)
            d.day = 1 ; 

        n += 186 ;
        if(n > 365 )
        {
            d.year += 1 ;
            d.month = 1 ;
        }
    }
    else 
    {
        cout << "\" The date is invalid ! \"" << endl ;
        return 0 ;
    }
    
    cout << endl << d.year << "/" << d.month << "/" << d.day << endl ;

}
