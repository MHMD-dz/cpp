#include<iostream>
using namespace std ;

int get_number(string message){
    int number ;
    cout << message ;
    cin >> number ;
    return number;
}

void fill_the_array(int T[] , int n){
    int i ;
    string message ;
    cout << "Enter the array elelments : " << endl ;
    for ( i = 0 ; i < n ; i++)
    { 
        message = "T[" + to_string( i+1) + "] : " ;
        T[i] = get_number(message);
    }
}

void write_the_array(int T[] , int n){
    int i ;
    cout << "the original array is : " ;
    for ( i = 0 ; i < n ; i++)
    {
        cout << T[i] << "  ";
    }
    cout << endl ;
}

void numberChecking( int T[] , int n , int x ){
    int counter = 0 , i;
    for ( i = 0 ; i < n ; i++)
    {
        if (x == T[i])
        {
            counter++;
        }
        
    }
    if (counter > 0) {
        cout << "The number " << x << " appears " << counter << " time(s)." << endl;
    } else {
        cout << "The number " << x << " is not in the array." << endl;
    }
}


int main (){
    int T[100] , n;
    n = get_number("Enter the number of the elelments you want in the array : ");
    fill_the_array(T,n);
    write_the_array(T,n);
    numberChecking(T,n,get_number("Enter the number that you want to check in this array : "));
}