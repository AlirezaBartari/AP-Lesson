#include <iostream>
using namespace std ; 

int fact(int num )
{
    if(num == 1 | num == 0)
        return 1 ;
        
    return fact(num-1) * num ;
}

int main(){

    int num ;
    cout << "Enter num : " ;
    cin >> num ;
    
    cout << "fact : " << fact(num) << endl ;
}
