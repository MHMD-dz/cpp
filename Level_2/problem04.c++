#include<iostream>
#include<string>
using namespace std ;

int get_number(){
    int n ;
    cout << "Enter the number : "; 
    cin >> n ;
    return n ;
}

bool chaking(int number){
    int i , sum = 0;
    for ( i = 1 ; i <= number/2 ; i++){
        if (number % i == 0){
            sum += i ;
        }
    }
    return (number == sum);}

void all_numbers_chek(int n){
    int i ;
    cout << "The perfect numbers from 1 to " << n << endl ;
    for ( i = 1 ; i <= n ; i++){
        
        if (chaking(i)){
            cout << "\t" << i ;
        }
        
    }
    
}


int main (){
    all_numbers_chek(get_number());
}