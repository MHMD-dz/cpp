#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std ;

void  from_vector_to_file( string file_name , vector <string> &hi){
    
    fstream file ;
    file.open("test3.txt", ios::out | ios::app) ;

    if (file.is_open())
    {
        if (line != "")
        {
            for ( string line : hi )
            {
            file << line << "\n" ;
            }
        }
        file.close() ;
    }
    
}

int main () {

    vector <string> hello = {"mohamed " ,  "walaa" , "amine" , "abdelilah" , "hassan" , "laila" , "hasnaa" , "lilian" , "manal" , "hello everyone"} ;
    from_vector_to_file("test3.txt" , hello);
    
}