#include <iostream>
using namespace std;

class List{

    private:
        int len;   //ظرفیت آرایه
        int n;     //تعداد عناصر اضافه‌شده به آرایه
        int *arr;  //اشاره گری برای آرایه پویا

    public:
        // سازنده پیش‌فرض
        List()
        {
            arr = new int[10];
            n=0;
        }
        // سازنده با طول مشخص
        List(int l )
        {
            n=0;
            len = l;
            arr = new int[len];
        }
        // مخرب
        ~List()
        {
            delete[] arr;
        }
        // متدها
        void add(int);
        void show();
        int search(int);
};

void List::add(int num )
{
    if(n < len)
    {
        arr[n] = num;
        n++; 
    }        
}
void List::show()
{   
    cout << "array : ";

    for(int i=0 ; i<n ; i++)
        cout << arr[i] << " ";

    cout << endl;
}
int List::search(int num ) 
{
    for(int i=0 ; i<n ; i++)
    {
        if(num == arr[i]){
            return i;
        }
    }
    return -1 ;
}
int main(){

    int number, len;
    cout << "Enter lenght of array : ";
    cin >> len;
    List list(len) ;

    for(int i=0 ; i<len ; i++ )
    {
        cout << "Enter number : " ;
        cin >> number;
        list.add(number);
    }
    list.show();

    cout << "Enter number for searching : ";
    cin >> number;
    cout << "Position: " << list.search(number);
}
