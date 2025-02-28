#include<iostream>
#include<fstream>

using namespace std ;

int main () {
    fstream file ;
    file.open("test.txt", ios::out) ;
    
    if (file.is_open())
    {
        file << " hi i'm mohamed benzineb \n" ;
        file << " i'm 22 year old computer sience student \n";
        file << " this file wase made by my using c++ to test fstream liberary \n" ;
        file << " and ramadan mobarak \n" ;

        file.close() ;
    }
    
}