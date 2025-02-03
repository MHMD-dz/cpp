#include<iostream>
#include<string>
using namespace std ;

string get_number(){
    string n ;
    cout << "Enter the number : "; 
    cin >> n ;
    return n ;
}

int s_lengthe(string number){
    int i ;
    i = number.length();
    return i ;
}

void write_numbers(int n , string numbr ){
    int i ;
    for ( i = n ; i >= 0; i--){
        cout << numbr[i] << endl ;
    }
    cout << endl ;
}

int main (){
    string number ;
    number = get_number();
    write_numbers(s_lengthe(number),number);
}
