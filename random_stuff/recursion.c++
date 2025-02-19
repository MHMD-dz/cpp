#include<iostream>

using namespace std ;

void write_numbr(int a , int b ){
   if ( a <= b){
        cout << "\t" << a << endl ;
        write_numbr( a + 1 , b );
    }
    
}

// HOMEWORK FUNCTION

// PART 1

void re_write_numbr(int a , int b ){
    if ( b >= a){
        cout << "\t" << b << endl ;
        re_write_numbr( a  , b -1 );
     }
     
 }

 // PART 2 
int power(int a , int b ){
    if (b > 0)
    {
        
        return a * power(a, b - 1) ;
    }
    return 1 ;
 }




int main (){
    int a , b ;
    cout << "Enter the first number: " << endl ;
    cin >> a ;
    cout << "Enter the seconde number: " << endl ;
    cin >> b ;
    cout << "Wrinting the numbers from " << a << " to " << b  << " : " << endl ;
    //write_numbr(a,b) ;

    // HOMEWORK
    re_write_numbr(a,b);
    cout << "the power of " << a << " on " << b << " is: " << power(a,b)<< endl ;
}