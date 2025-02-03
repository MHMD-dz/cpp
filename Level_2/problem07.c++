#include<iostream>
#include<string>
using namespace std ;


string get_number(){
    string n ;
    cout << "Enter the number : "; 
    cin >> n ;
    return n ;
}

string reverse_str(string number){
    int i ;
    for ( i = 0 ; i < number.length()/2 ; i++){
        swap (number[i] , number[number.length() - i - 1] ) ;
    }
    return number ;

}

int str_to_int(string number){
    return (stoi(number)) ;
}

void write(int number){
    cout << "The reversed number is : " << number ;
}

int main(){
    write(str_to_int(reverse_str(get_number())));
}