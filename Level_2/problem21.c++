#include<iostream>
using namespace std ;

int get_number(string message){
    int number ;
    cout << message ;
    cin >> number ;
    return number;
}

char random(int from , int to ){
    
    int  random ;
    random = (rand() % (to - from + 1) ) + from ;
    return char(random) ;
}

string generate_key(){
    int i , j , x ;
    string key ;
    for ( i = 1 ; i <= 4 ; i++){
        for ( j = 1 ; j <= 4; j++){
           key += random(65,90);
            }
        key += "-" ;
    }
    return (key= key.substr(0,key.length()-1));
}

void keys(int number){
    int i ;
    for ( i = 1; i <= number; i++){
        cout << "key [" << i << "] : " << generate_key() << endl ;
    }
    
}

int main(){
    srand(time(0));
    keys(get_number("Enter the number of keys you want : "));
}