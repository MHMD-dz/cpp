#include<iostream>
#include<math.h>
using namespace std ;

int get_number(string message){
    int number ;
    cout << message ;
    cin >> number ;
    return number;
}

int my_abs(int number){
    if (number < 0)
    {
        return number * (-1) ;
    }
    return number ;
}





int main(){
    int n ;
    n = get_number("enter a number to  test my abs function on it : ") ;
    cout << "my valeur absuliot of " << n << " is : " << my_abs(n) << endl;
    cout << "c++ valeur absuliot of " << n << " is : " << abs(n) ;

}