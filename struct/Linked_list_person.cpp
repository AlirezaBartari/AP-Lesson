#include <iostream>
using namespace std ;

struct node 
{
    string name ;
    string family ;

    node *link ;

}*first = NULL , *last = NULL ;

void add() ;
void show() ;
void del( string, string ) ;
node* search( string, string ) ;

int main(){

    int option ,n ;
    string name , family ;
    
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

                cout << endl << "How many persons do you want to add : " ;
                cin >> n ; 

                for(int i=0 ; i<n ; i++)
                    add();
                break ;
            
            case 2 :

                show();
                
                break ;

            case 3 : 

                cout << "Enter name and family for deletion : " ;
                cin >> name >> family ;
                del(name , family) ;

                break ;
            
            case 4 : 
                cout << "Enter name and family for searching : " ;
                cin >> name >> family ;
                
                cout << "postion : " << search(name , family) << endl ;
                break ;

            case 5 :
                cout << endl << "program finished ! " << "\n\n" ;
                return 0 ;
 
        }
    }
    
}

void add(){

    node *temp = new node ;

    cout << "Enter name and family : " ;
    cin >> temp -> name >> temp -> family ;

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
        cout << temp -> name << " " << temp -> family << " -> " ;
        temp = temp->link ;
    }
    cout << "NULL" << endl ;
}

void del(string name , string family) 
{
    node *temp = first ;

    //Deletion at the beginning of linked list.
    if( name == first -> name & family == first -> family )   
        first = first -> link ;
    
    
    //Deletion at the end of linked list.
    else if( name == last -> name & family == last -> family )
    {   
        while( temp -> link -> link != NULL )
            temp = temp -> link ;

        temp -> link = NULL ;
    }

    //Deletion at the middle of linked list.
    else
    {
        while( temp -> link -> name != name & temp -> link -> family != family )
            temp = temp -> link ;
        
        temp ->link = temp ->link ->link ;
    }
}
node* search( string name , string family ) {
    
    node *temp = first ;

    while( temp != NULL ){
        
        if( temp -> name == name & temp -> family == family )
            return temp ;
        
        temp = temp -> link ;
    }
    return  nullptr ;
}
