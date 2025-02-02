#include<iostream>
#include<string>
#include<math.h>
using namespace std ;
int get_number(){
    int n ;
    cout << "Enter the number : "; 
    cin >> n ;
    return n ;
}

int is_number_prime(int number){
    int i  , s = 0;
    if (number <= 1) return 0; 
    if (number == 2) return 1;
    for (i = 2 ; i <= sqrt(number); i++){
    if ( number % i == 0){
        return 0;}
        }
    return 1;
}

void all_numbers_chek(int n){
    int i ;
    int numbr ;
    for ( i = 2 ; i <= n ; i++){
        numbr = is_number_prime(i);
        if (numbr != 0){
            cout << "\t" << i ;
        }
        
    }
    
}

int main (){
    all_numbers_chek(get_number());
}