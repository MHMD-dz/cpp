#include<iostream>
#include<fstream>

using namespace std ;

int main () {
    fstream file ;
    file.open("test.txt", ios::out | ios::app) ; // append mode
    
    if (file.is_open())
    {
        // 1

        /*file << " hi i'm mohamed benzineb \n" ;
        file << " i'm 22 year old computer sience student \n";
        file << " this file wase made by my using c++ to test fstream liberary \n" ;
        file << " and ramadan mobarak \n" ;*/

        // 2
        
        // file << " now i added this line to existence file \n" ;

        // 3 
        
        file << " and again \n " ; 

        file.close() ;
    }
    
}