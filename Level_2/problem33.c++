#include<iostream>
using namespace std ;

int get_number(string message){
    int number ;
    cout << message ;
    cin >> number ;
    return number;
}
int random(int from , int to ){
    int random ;
    random = (rand() % (to - from + 1) + from ) ;
    return random ;
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

string keys(){
    
    string key = generate_key() ;
    
    return key ;
}

void fill_the_array(string T[] , int n){
    int i ;
    for ( i = 0 ; i < n ; i++)
    { 
        T[i] = keys() ;
    }
}

void write_the_array(string T[] , int n){
    int i ;
    cout << "the elemants of the array are : " << endl ;
    for ( i = 0 ; i < n ; i++)
    {
        cout << "T[" << i+1 << "] : " << T[i] << "  " << endl;
    }
    cout << endl ;
}


int main (){
    srand(time(0));
    int  n ;
    string T[100] ;
    n = get_number("Enter the number of the keys you want : ");
    fill_the_array(T,n);
    write_the_array(T,n);
}