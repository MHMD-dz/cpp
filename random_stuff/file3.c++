#include<iostream>
#include<fstream>
#include<string>

using namespace std ;

void print_file_content( string file_name){
    string line ;
    fstream file ;
    file.open( file_name , ios::in) ; // read mode

    if (file.is_open())
    {
        while (getline(file , line))
        {
            cout << line << endl ;

        }
        
    }
    file.close() ;
}

int main () {
    print_file_content("test.txt");
}