#include<iostream>
#include<math.h>
using namespace std ;

float get_number(string message){
    float number ;
    cout << message ;
    cin >> number ;
    return number;
}

float my_floor(float number){
    if (number < 0 && number != int(number))
    {
        return int(number) -1 ;
    }
    
    return int(number) ; 

}





int main(){
    float n ;
    n = get_number("enter a number to  test my floor function on it : ") ;
    cout << "my floor of " << n << " is : " << my_floor(n) << endl;
    cout << "c++ floor of " << n << " is : " << floor(n) ;
}