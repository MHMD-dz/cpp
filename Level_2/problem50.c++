#include<iostream>
#include<math.h>
using namespace std ;

float get_number(string message){
    float number ;
    cout << message ;
    cin >> number ;
    return number;
}

int my_sqrt(int number){
    int  i ;
    for ( i = 1 ; i < number; i++)
    {
        if (number / i == i )
        {
            return i ;
        }
        
    }
    return 0 ;

}
float my_sqrt2(float number){
    return pow(number,0.5);
}




int main(){
    float n ;
    n = get_number("enter a number to  test my sqrt function on it : ") ;
    cout << "my sqrt of " << n << " is : " << my_sqrt(n) << endl;
    cout << "my sqrt 2 of " << n << " is : " << my_sqrt2(n) << endl;
    cout << "c++ sqrt of " << n << " is : " << sqrt(n) ;
}