#include<iostream>

using namespace std ;

void write_numbr(int a , int b ){
   if ( a <= b){
        cout << "\t" << a << endl ;
        write_numbr( a + 1 , b );
    }
    
}


int main (){
    int a , b ;
    cout << "Enter the first number: " << endl ;
    cin >> a ;
    cout << "Enter the seconde number: " << endl ;
    cin >> b ;
    cout << "Wrinting the numbers from " << a << " to " << b  << " : " << endl ;
    write_numbr(a,b) ;
}