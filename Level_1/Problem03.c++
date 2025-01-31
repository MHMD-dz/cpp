#include<iostream>
#include<string>
using namespace std ;

enum even_odd { even = 1 , odd = 2 };

int demand_numbr(){
    int numbr ;
    cout << "Enter the number to chek if it even or odd : ";
    cin >> numbr ;
    return numbr ;
}

even_odd checking ( int numbr){

    if ( numbr % 2 == 0){
        return even_odd::even ;}
    else{
        return even_odd::odd;}
}

void result () {
    even_odd numbr ;
    numbr = checking( demand_numbr() ) ;
    if ( numbr == even_odd::even){
        cout << "The number is even" << endl ;}
    else{
        cout << "The number is odd " << endl ;
    }
}

int main(){
    result();
}