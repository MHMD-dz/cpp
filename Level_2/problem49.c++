#include<iostream>
#include<math.h>
using namespace std ;

float get_number(string message){
    float number ;
    cout << message ;
    cin >> number ;
    return number;
}

float my_ceil(float number){
    if (number < 0 )
    {
        return int(number)  ;
    }
    else if (number == int(number))
    {
        return number ;
    }
    
    return int(number) + 1 ; 

}





int main(){
    float n ;
    n = get_number("enter a number to  test my ceil function on it : ") ;
    cout << "my ceil of " << n << " is : " << my_ceil(n) << endl;
    cout << "c++ ceil of " << n << " is : " << ceil(n) ;
}