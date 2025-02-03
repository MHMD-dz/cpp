#include<iostream>
using namespace std ;

int get_number(string hi){
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

void all_dig(int number){
    int i ;
    for ( i = 1 ; i <= 9; i++){
        if (digi_frec(number,i) > 0 ){
            cout << "The digit " << i << " freaquancy is : " << digi_frec(number,i) << " time(s)" << endl ;
        }
         ;
    }
    
}

int main(){
    all_dig(get_number("enter the number : "));
}