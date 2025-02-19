#include<iostream>

using namespace std ;

// using ths same name for function but deferent parameter make the compiler know woh to compili


int mySum( int a , int b ){
    return( a + b );
}

int mySum( int a , int b , int c ){
    return( a + b + c );
}

int mySum( int a , int b , int c , int d ){
    return( a + b + c + d );
}

double mySum( double a , double b ){
    return( a + b  );
}

int main(){
    cout << mySum(10,20) << endl ;
    cout << mySum(45.50 , 54.50) << endl ;
    cout << mySum(10,20,100) << endl ;
    cout << mySum(10,20,30,40) << endl ;

}