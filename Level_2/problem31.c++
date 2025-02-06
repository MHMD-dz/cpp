#include<iostream>
using namespace std ;

int get_number(string message){
    int number ;
    cout << message ;
    cin >> number ;
    return number;
}

void swap ( int &i , int &j){
    int temp ;
    temp = i ;
    i = j ;
    j = temp ;
}

int random_number(int from , int to ){
    int random ;
    random = (rand() % (to - from + 1) + from) ;
    return random ;
   
}

void fill_the_array(int T[] , int n){
    int i ;
    for ( i = 0 ; i < n ; i++)
    { 
        T[i] = i+1 ;
    }
}


void write_the_array(int T[] , int n){
    int i ;
    cout << "the elemants of the array are : " ;
    for ( i = 0 ; i < n ; i++)
    {
        cout << T[i] << "  ";
    }
    cout << endl ;
}

void suffle_arrye ( int T[]  , int n ){
    int i ;
    for ( i = 0; i < n ; i++)
    {
        swap( T[random_number(1,n)-1] , T[random_number(1,n)-1]   );
    }
    
}


int main(){
    srand(time(0));
    int T[100] , n ;
    n = get_number("Enter the number of the elelments you want in the array : ");
    fill_the_array(T,n);
    cout << "The array befor the suffle : " << endl ;
    write_the_array(T,n);
    suffle_arrye(T,n);
    cout << "The array after the suffle : " << endl ;
    write_the_array(T,n);
}