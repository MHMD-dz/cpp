#include<iostream>
#include<string>
using namespace std ;

int read_n(){
    int n ;
    cout << "Enter N : " ;
    cin >> n ;
    return n ;
}

void print_range_from1to_n_do(int n){
    int i=1 ;
    do
    {
    cout << i << endl ;
    i++;
    } while (n >= i);
    
}

void print_range_from1to_n_while(int n){
    int i = 1 ;
    while ( n >= i ){
    cout << i << endl ;
    i++;
    }
    
}

void print_range_from1to_n_for(int n ){
    int i;
    for ( i = 1 ; i <= n ; i++){
    cout << i << endl ;
    }
    
}

int factorial (int n ){
    int i , fact = 1;
    i = 1 ;
    while (i <= n){
    fact *= i ;
    i ++ ;
    }
    return fact ;
}

int sum_of_odds(int n){
    int i , sum=0 ;
    for ( i = 1 ; i <= n ; i++){
        if (i % 2 != 0){
        sum += i ;
        }
        
    }
    return sum ;
}

void print_the_sum(int sum){
    cout << "the sum of odd number from 1 to n is : " << sum << endl ; 
}

void print_the_facto(int fact){
    cout << "the factorial of n is : " << fact << endl; 
}

int main(){
    // print_range_from1to_n_do(read_n());
    // print_the_sum(sum_of_odds(read_n()));
    print_the_facto(factorial(read_n()));
}