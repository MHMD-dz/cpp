#include<iostream>
using namespace std ;

int get_number(string hi){
    int n ;
    cout << hi ;
    cin >> n ;
    return n ;
}

int reversed_number(int number){
    int reverc = 0 , remainder ;
    while (number > 0){
        remainder = number % 10 ;
        reverc = reverc*10 + remainder ;
        number /= 10 ;
    }
    return reverc;
}

bool chaking( int numb1 , int numb2){
    
    return (numb1 == numb2);
    
}

void write(bool numbr){
    if (numbr){
        cout << "the number is palindrom ";}
    else cout << "the number is not palindrom ";
}

int main (){
    int number = get_number("Enter the number : ");
    write(chaking(number , reversed_number(number)));
}