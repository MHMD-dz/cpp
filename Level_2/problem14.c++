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
    for ( i = number+64 ; i >= 65; i--)
    {
        for ( j = 65 ; j <= i ; j++){
            cout << char(i) ;
        }
        
        cout << endl ;
    }
    
}

int main(){
    pattern(get_number("Enter the number : "));
}