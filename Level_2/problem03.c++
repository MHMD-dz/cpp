#include<iostream>
#include<string>
using namespace std ;

int get_number(){
    int n ;
    cout << "Enter the number : "; 
    cin >> n ;
    return n ;
}

bool chaking(int number){
    int i , sum = 0;
    for ( i = 1 ; i <= number/2 ; i++){
        if (number % i == 0){
            sum += i ;
        }
    }
    if (sum == number){
        return true ;
    }
    else return false ;
}

void write ( bool is_perfect){
    if (is_perfect)
    {
        cout << "The number is perfect";}
    else cout << "The number is not perfect";
}

int main (){
    write(chaking(get_number()));
}