#include<iostream>
#include<string>
using namespace std ;

int main(){
    string str ,number1 , number2;
    // string can read space
    cout << "Enter your full name withot using \"_\" " << endl ;
    getline( cin , str ) ;
    cout << "your full name is : " << str << endl ;
    // string as a number 
    cout << "Enter first number \" as a string \" " << endl ;
    cin >> number1 ;
    cout << "Enter second number \" as a string \" " << endl ;
    cin >> number2 ;
    cout << "the lingth of your full name \"with space \" is : " << str.length() << endl ;
    cout << "the caracter at the place 0 and 2 and 4 and 6 are : \t" << str[0] << "\t" << str[2] << "\t" << str[4] << "\t" << str[6] << endl ; 
    cout << "caractaring first and second number is " << number1 + number2 << endl ;
    cout << number1 << " * " << number2 << " = " << stoi(number1) * stoi(number2) << endl ;

}