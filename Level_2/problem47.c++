#include<iostream>
#include<math.h>
using namespace std ;

float get_number(string message){
    float number ;
    cout << message ;
    cin >> number ;
    return number;
}

float fractionel(float number){
    return number - int(number) ;
}

float my_round(float number){
    float frac ;
    frac = fractionel(number) ;
    number = int(number) ;
    if (frac < 0.5)
    {
        return number ;
    }
    return number + 1 ;
}





int main(){
    float n ;
    n = get_number("enter a number to  test my abs function on it : ") ;
    cout << "my round of " << n << " is : " << my_round(n) << endl;
    cout << "c++ round of " << n << " is : " << round(n) ;
}