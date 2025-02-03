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
    int sum = 0 ;
    while (number > 0)
    {
        sum += scraping(number);
        number /= 10 ;
    }  
    cout << "the sum of the digits is : " << sum ;
}

int main (){

    write(get_number("enter the number : "));
}