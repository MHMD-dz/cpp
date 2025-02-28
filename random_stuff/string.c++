#include<iostream>
#include<string>


using namespace std ;

int main(){
    string hi ;
    hi = "My name is benzineb mohamed and i hate programing !" ;

    // the length of the string :
    cout << "the length: " <<  hi.length() << endl ;

    // print the letter position
    cout << hi.at(14) << endl ;

    // ading haha loser to the end of the string :
    cout << "the string after: " <<  hi.append(" haha loser") << endl ;

    // insert the best in position 28
    cout << hi.insert(28,"the best ") << endl ;

    // print all next 16 letter from 11 position
    cout << hi.substr(11,16) << endl ;

    // add caracter to the end of the string 
    hi.push_back('!') ;
    hi.push_back('!') ;
    cout << hi << endl ;

    // removing caracter from the end of the string
    hi.pop_back();
    cout << hi << endl ;

    // clear the string 
    hi.clear() ;
    cout << hi << endl ;
    hi.push_back('!') ;
    cout << hi << endl ;


}