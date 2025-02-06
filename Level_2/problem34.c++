#include<iostream>
using namespace std ;

int get_number(string message){
    int number ;
    cout << message ;
    cin >> number ;
    return number;
}

int random_number(int from , int to ){
    int random ;
    random = (rand() % (to - from + 1) + from ) ;
    return random ;
}
void fill_the_array(int T[] , int n){
    int i ;
    for ( i = 0 ; i < n ; i++)
    { 
        T[i] = random_number(1,100) ;
    }
}

void write_the_array(int T[] , int n){
    int i ;
    cout << "the elemants of the array are : " ;
    for ( i = 0 ; i < n ; i++)
    {
        cout << T[i] << "  ";
    }
    cout << endl ;
}

void search(int T[] , int n , int x){
    int i ;
    cout << "the number your looking for is : " << x << endl ;
    for ( i = 0; i < n ; i++){
        if (x == T[i])
        {
            cout << "the number " << x << "exist in the position " << i << endl ;
            cout << "the number " << x << "order is " << i+1 ;
            return ;
        }
    }
    cout << "the number your looking for does't exist :-) " ;
}


int main (){
    srand(time(0));
    int T[100] , n ;
    n = get_number("Enter the number of the elelments you want in the array : ");
    fill_the_array(T,n);
    write_the_array(T,n);
    search(T,n,get_number("Enter a number to search for : "));

}