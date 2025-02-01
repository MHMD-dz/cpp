#include<iostream>
#include<string>
using namespace std ;

int get_number(){
    int n ;
    cout << "Enter the number : "; 
    cin >> n ;
    return n ;
}

bool is_number_prime(int number){
    int i  , s = 0;
    for (i = 2 ; i < number/2; i++){
    if ( number % i == 0){
        s++; }
        }
    if (s != 0){
        return true;}
    else return false;
}

void write_result( int number , bool paire){
    if (paire){
        cout << "The number " << number << " is prime " ;}
    else cout << "The number " << number << " is not prime " ;
}

int main(){
    int number = get_number();
    write_result(number,is_number_prime(number));
}