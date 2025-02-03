#include<iostream>
using namespace std ;

int get_number(string hi){
    int n ;
    cout << hi ;
    cin >> n ;
    return n ;
}

void pattern(int number){
    int i , j ;
    for ( i =number ; i > 0; i--)
    {
        for ( j = 0 ; j < i ; j++){
            cout << i ;
        }
        
        cout << endl ;
    }
    
}

int main(){
    pattern(get_number("Enter the number : "));
}