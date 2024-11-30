#include <iostream>
using namespace std ;

struct node 
{
    int number ;
    node *link ;

}*first = NULL , *last = NULL ;

void add() ;
void show() ;
void del( int ) ;
node* search( int ) ;

int main(){

    int option , num , n ;
    
    while(true){

        cout 
        << endl << "Please select " << endl 
        << "'1' for adding " << endl 
        << "'2' for showing " << endl
        << "'3' for deletion of linked list " << endl
        << "'4' for searching " << endl 
        << "'0' for exit : " ;

        cin >> option ;

        switch(option){

            case 0 :
                cout << endl << "program finished ! " << "\n\n" ;
                return 0 ;

            case 1 :

                cout << endl << "How many numbers do you want to add : " ;
                cin >> n ; 

                for(int i=0 ; i<n ; i++)
                    add();
                break ;
            
            case 2 :

                show();
                
                break ;

            case 3 : 

                cout << "Enter your num for deletion : " ;
                cin >> num ;
                del(num) ;

                break ;
            
            case 4 : 
                cout << "Enter number for searching : " ;
                cin >> num ;
                
                cout << "postion : " << search(num) << endl ;

                break ;
        }
    }
    
}

void add(){

    node *temp = new node ;

    cout << "Enter number : " ;
    cin >> temp->number ;

    if(first == NULL ){
        first = last = temp ;
    }
    else
    {
        last ->link = temp ;
        last = temp ;
    }
}

void show(){

    node *temp = first ;

    cout << endl ;
    while(temp != NULL)
    {
        cout << temp->number << " -> " ;
        temp = temp->link ;
    }
    cout << "NULL" << endl ;
}

void del(int num) 
{
    node *temp = first ;

    //Deletion at the beginning of linked list.
    if( num == first -> number )   
        first = first -> link ;
    
    
    //Deletion at the end of linked list.
    else if( num == last -> number )
    {   
        while( temp -> link -> link != NULL )
            temp = temp -> link ;

        temp -> link = NULL ;
    }

    //Deletion at the middle of linked list.
    else
    {
        while( temp -> link -> number != num )
            temp = temp -> link ;
        
        temp ->link = temp ->link ->link ;
    }
}
node* search( int num ) {
    
    node *temp = first ;

    while( temp != NULL ){
        
        if( temp -> number == num )
            return temp ;
        
        temp = temp -> link ;
    }
    return  nullptr ;
}
