#include<iostream>
using namespace std ;

int get_number(string hi){
    int n ;
    cout << hi ;
    cin >> n ;
    return n ;
}

int get_digit(string hi){
    int n ;
    cout << hi ;
    cin >> n ;
    return n ;
}

int digi_frec(int number , int digit){
    int remander = 0 ;
    int compt = 0 ;
    while ( number > 0 ){
        remander = number % 10 ;
        number /= 10 ;
        if (remander == digit){
            compt ++;
        }
        
    }
    
    return compt ;
}

void write(int digit){
    cout << "The digit frequancy in the number is : " << digit ; 
}

int main(){
    int number , digit ;
    number = get_number("Enter the number : ");
    digit = get_digit("Enter the digit : ");
    write(digi_frec(number,digit));
}