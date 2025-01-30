#include<iostream>
#include<string>
using namespace std ;

// swaping by the pointer
int swap( int &numbr1 , int &numbr2 ){
    int temp ;
    temp = numbr1 ;
    numbr1 = numbr2 ;
    numbr2 = temp ;
    return 0 ;
}


int main(){
    int numbre1 , numbre2 ;
    cout << "Enter the first number : " ;
    cin >> numbre1 ;
    cout << "Enter the second number : " ;
    cin >> numbre2 ;

    // befor the swap
    cout << "The number 1 befor the fonction : " << numbre1 << endl ;
    cout << "The number 2 befor the fonction : " << numbre2 << endl ;

    // the swap
    swap( numbre1 , numbre2 ) ;
    
    // after the swap
    cout << "The number 1 after the fonction : " << numbre1 << endl ;
    cout << "The number 2 after the fonction : " << numbre2 << endl ;

}