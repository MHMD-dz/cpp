#include<iostream>
using namespace std ;

int get_number(string message){
    int number ;
    cout << message ;
    cin >> number ;
    return number;
}

int random_number(int from , int to ){
    int random ;
    random = (rand() % (to - from + 1) + from ) ;
    return random ;
}
void fill_the_array(int T[] , int n){
    int i ;
    for ( i = 0 ; i < n ; i++)
    { 
        T[i] = random_number(1,100) ;
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

void sum_of_arrays (int T[] , int A[] , int S[], int  n ){
    int  i ;
    for ( i = 0; i < n; i++){
        S[i] = A[i] + T[i] ;
    }
}


int main (){
    srand(time(0));
    int T[100] , A[100] , S[100], n;
    n = get_number("Enter the number of the elelments you want in the array : ");
    fill_the_array(T,n);
    fill_the_array(A,n);
    cout << "the first array : " << endl ;
    write_the_array(T,n);
    cout << "the second array : " << endl ;
    write_the_array(A,n);
    cout << "the sum of the first array and the second : " << endl ;
    sum_of_arrays(T,A,S,n);
    write_the_array(S,n);
}