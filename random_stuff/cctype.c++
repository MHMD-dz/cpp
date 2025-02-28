#include<iostream>
#include<string>
#include<cctype>

using namespace std ;

int main(){
    char m ;
    m = 'm' ;
    m = toupper('m') ;
    cout << "converting m to M : " << toupper(m) << endl ;
    m =tolower('M') ;
    cout << "converting M to m : " << tolower(m) << endl ;
    cout << "is a lower letter : " << islower(m) << endl ;
    cout << "is a upper letter : " << isupper(m) << endl ;
    cout << "is a digit letter : " << isdigit('9') << endl ;
    cout << "is a punct letter : " << ispunct('#') << endl ;

}