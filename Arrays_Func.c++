#include<iostream>
#include<string>
using namespace std ;

void pros_input ( float T[] ){
    cout << "Enter the first grade : " ;
    cin >> T[0] ;
    cout << "Enter the second grade : " ;
    cin >> T[1] ;
    cout << "Enter the theard grade : " ;
    cin >> T[2] ;
    }

void prod_output ( float T[] ){
    cout << "____________________" << endl ;
    cout << "the average is : " << (T[0] + T[1] + T[2] ) / 3 << endl ;
}

float fonc_output ( float T[] ){
    return ((T[0] + T[1] + T[2] ) / 3) ;
}

int main(){
    float array[2] ;
    pros_input(array) ;
    prod_output(array) ;
    cout << "the average of grade is : " << fonc_output(array);
}