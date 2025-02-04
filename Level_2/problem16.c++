#include<iostream>
using namespace std ;

int get_number(string hi){
    int n ;
    cout << hi ;
    cin >> n ;
    return n ;
}

void pattern(int number){
    int i , j , x ;
    for ( i = 65 ; i <= 90 ; i++)
    {
        for (j = 65 ; j <= 90; j++){
            
            for ( x = 65 ; x <= 90 ; x++)
            {
                cout << char(i) << char(j) << char(x) << endl ;
            }
            
        }
        

    }
    
}

int main(){
    pattern(get_number("Enter the number : "));
}