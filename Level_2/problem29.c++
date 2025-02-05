#include<iostream>
#include<math.h>
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

void prime_array(int T[], int n, int A[], int &n2) {
    for (int i = 0; i < n; i++) {
        if (T[i] < 2) continue;  

        bool is_prime = true;
        for (int j = 2; j <= sqrt(T[i]); j++) {  
            if (T[i] % j == 0) {  
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            A[n2] = T[i];  
            n2++;
        }
    }
}

int main (){
    srand(time(0));
    int T[100] , A[100] , n , n2 = 0;
    n = get_number("Enter the number of the elelments you want in the array : ");
    fill_the_array(T,n);
    write_the_array(T,n);
    prime_array(T,n,A,n2);
    write_the_array(A,n2);

}