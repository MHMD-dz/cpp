#include<iostream>

using namespace std ;

bool pass_or_not(){
    float result, s3 , s4 ;
    cout << "Enter your avrage of the s3: " ;
    cin >> s3 ;
    cout << "Enter your avrage of the s4: " ;
    cin >> s4 ;
    result = (s3+s4) / 2 ;
    return (result >= 10 ) ?  true : false ;

}

int main(){
    bool ispass ;
    ispass = pass_or_not() ;

    (ispass) ? cout << "you have passed the L2" : cout << "la fac is calling" << endl ;


    // homework
    int number ;
    cout << "Enter the number:  ";
    cin >> number ;
    (number == 0) ? cout << "the number is 0 " :
    (number > 0) ? cout << "the number is positive "  :
    cout << "the number is nigative " ;
    
}