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



void write(int number){
    int i ;
    while (number > 0)
    {
        cout << number%10 << endl ;
        number /= 10 ;
    }   
}

int main(){
    int number ;
    number = get_number("enter the number : ");
    write(reversed_number( number));
}