#include<iostream>
using namespace std ;

int get_number(string hi){
    int n ;
    cout << hi ;
    cin >> n ;
    return n ;
}

int scraping(int number){
    return(number % 10 );
}

void write(int number){
    int i ;
    while (number > 0)
    {
        cout << scraping(number) << endl ;
        number /= 10 ;
    }   
}

int main(){
    int number ;
    number = get_number("enter the number : ");
    write(number);
}